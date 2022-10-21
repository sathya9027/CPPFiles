//drawing a triangle using VBO and using external shader to fill color(glew)
#pragma comment(lib,"OpenGL32.lib")
#include<iostream>
#include<fstream>
#include<GL/glew.h>
#include<GLFW/glfw3.h>
using namespace std;
GLuint programObj;
GLuint fragmentShaderObj;
GLfloat vertice1[] = {
	0.5f, 0.5f,		//v1
	0.2f, 0.0f,		//v2
	0.8f, 0.0f		//v3
};
GLfloat vertice2[] = {
	-0.7f, 0.5f,	//v1
	-0.7f, 0.0f,	//v2
	-0.2f, 0.0f		//v3
};
GLuint VBO;
void DrawTriangle() {
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertice1), vertice1, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);
	glDrawArrays(GL_TRIANGLES, 0, 3);
	glDisableVertexAttribArray(0);
	glDeleteBuffers(1, &VBO);
}
void DrawRightAngleTriangle() {
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertice2), vertice2, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);
	glDrawArrays(GL_TRIANGLES, 0, 3);
	glDisableVertexAttribArray(0);
	glDeleteBuffers(1, &VBO);
}
string ReadShaderFile(const char* filename) {
	string code;
	ifstream file(filename);
	if (!file.good()) {
		cout << "Can't read file " << filename << endl;
		terminate();
	}
	else {
		file.seekg(0, ios::end);
		code.resize(file.tellg());
		file.seekg(0, ios::beg);
		file.read(&code[0], code.size());
		file.close();
	}
	return code;
}
void InitFragmentShader() {
	//drawing triangle
	DrawTriangle();
	DrawRightAngleTriangle();

	//initializing shader
	string shaderCode = ReadShaderFile("FragmentShader.glsl");

	//reading shader
	fragmentShaderObj = glCreateShader(GL_FRAGMENT_SHADER);
	const char* code = shaderCode.c_str();
	const int size = shaderCode.size();
	glShaderSource(fragmentShaderObj, 1, &code, &size);

	//compiling shader
	glCompileShader(fragmentShaderObj);

	programObj = glCreateProgram();
	glAttachShader(programObj, fragmentShaderObj);
	glLinkProgram(programObj);
	glUseProgram(programObj);
}
int main() {
	glfwInit();
	GLFWwindow* window;
	window = glfwCreateWindow(800, 800, "Window", NULL, NULL);
	
	if (window == NULL) {
		cout << "Failed to create GLFW window" << endl;
		glfwTerminate();
	}
	else {
		glfwMakeContextCurrent(window);
	}
	glewInit();
	do {
		//background color
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
		InitFragmentShader();
		//window
		glfwSwapBuffers(window);
		glfwPollEvents();
	} while (glfwWindowShouldClose(window) == 0);
	return 0;
}