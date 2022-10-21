//drawing a triangle using external vertex and fragment shader(glew)

#include "Common.h" //it has all include syntax

GLfloat vertices[] = {
	-0.3f, -0.3f,	//v1
	0.3f, -0.3f,	//v2
	0.0f, 0.3f		//v3
};

GLuint VBO;
GLuint vertexAttribute;
GLuint colorAttribute;

Window myWindow;		//window class
Shader myShader;		//shader class

float r, g, b;

//user define function

void RandomColor() {
	r = (float)rand() / RAND_MAX;
	g = (float)rand() / RAND_MAX;
	b = (float)rand() / RAND_MAX;
}

void DrawTriangle() {
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	vertexAttribute = glGetAttribLocation(myShader.programObj, "_vertices");
	colorAttribute = glGetUniformLocation(myShader.programObj, "_color");
	glUniform3f(colorAttribute, r, g, b);
	glVertexAttribPointer(vertexAttribute, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(vertexAttribute);
	glEnableVertexAttribArray(colorAttribute);
	glDrawArrays(GL_TRIANGLES, 0, 3);
	glDisableVertexAttribArray(vertexAttribute);
	glDisableVertexAttribArray(colorAttribute);
}

//main function
int main() {

	myWindow.CreateWindow(800, 800, "Game Window", false);

	myShader.ShaderInit();
	myShader.ProcessShaderFile("FragmentShader.glsl", GL_FRAGMENT_SHADER);
	myShader.ProcessShaderFile("VertexShader.glsl", GL_VERTEX_SHADER);

	do {
		myWindow.SetBGColor(0, 0, 0, 0);
		RandomColor();
		DrawTriangle();
		myShader.ApplyShader();
		myWindow.UpdateWindow();
	} while (myWindow.IsWindowNotClosed());
	return 0;
}