//drawing a triangle and using shader to fill color(glew)
#pragma comment(lib,"OpenGL32.lib")
#include<iostream>
#include<GL/glew.h>
#include<GLFW/glfw3.h>
using namespace std;
GLuint programObj;
GLuint fragmentShaderObj;
void InitFragmentShader() {
	//drawing triangle
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.5f, 0.0f);
	glEnd();

	//initializing shader
	string shaderCode =
		"#version 330\n\
		 void main()\n\
		 {\n\
			 gl_FragColor = vec4(1.0,1.0,0.0,0.0);\n\
		 }";

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