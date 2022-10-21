//drawing a rectangle using external vertex and fragment shader(glew)

#include "Common.h" //it has all include syntax

GLfloat triangle[] = {
	//vertices			//colors
	0.0f, 0.0f,			1.0f, 1.0f, 0.0f,		//v1
	0.0f, 0.5f,			0.0f, 1.0f, 1.0f,		//v2
	0.5f, 0.0f,			1.0f, 0.0f, 1.0f		//v3
};
GLfloat rectangle[] = {
	//vertices			//colors
	0.0f, 0.0f,			1.0f, 1.0f, 0.0f,		//v1
	0.0f, 0.5f,			0.0f, 1.0f, 1.0f,		//v2
	0.5f, 0.0f,			1.0f, 0.0f, 1.0f,		//v3
	0.5f, 0.5f,			1.0f, 1.0f, 0.0f,		//v4
};

GLuint VBO, EBO, vertexAttribute, colorAttribute;
GLuint indices[] = {
	0, 1, 2,		//triangle1
	2, 3, 1			//triangle2
};

Window myWindow;		//window class
Shader myShader;		//shader class

//user define function
void DrawTriangle() {
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(triangle), triangle, GL_STATIC_DRAW);

	vertexAttribute = glGetAttribLocation(myShader.programObj, "_vertices");
	glVertexAttribPointer(vertexAttribute, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (void*)0);
	/*out of five column's of each row's 
	take first two column values
	for vertices*/

	colorAttribute = glGetAttribLocation(myShader.programObj, "_color");
	glVertexAttribPointer(colorAttribute, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (void*)(2 * sizeof(GLfloat)));
	/*out of five column's of each row's 
	take last three column values
	for colors*/

	glEnableVertexAttribArray(vertexAttribute);
	glEnableVertexAttribArray(colorAttribute);
	glDrawArrays(GL_TRIANGLES, 0, 3);
	glDisableVertexAttribArray(vertexAttribute);
	glDisableVertexAttribArray(colorAttribute);
}

void DrawRectangle() {
	//generating vbo
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(rectangle), rectangle, GL_STATIC_DRAW);

	//generating ebo
	glGenBuffers(1, &EBO);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	vertexAttribute = glGetAttribLocation(myShader.programObj, "_vertices");
	glVertexAttribPointer(vertexAttribute, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (void*)0);
	/*out of five column's of each row's
	take first two column values
	for vertices*/

	colorAttribute = glGetAttribLocation(myShader.programObj, "_color");
	glVertexAttribPointer(colorAttribute, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (void*)(2 * sizeof(GLfloat)));
	/*out of five column's of each row's
	take last three column values
	for colors*/

	glEnableVertexAttribArray(vertexAttribute);
	glEnableVertexAttribArray(colorAttribute);
	
	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

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
		//DrawTriangle();
		DrawRectangle();
		myShader.ApplyShader();
		myWindow.UpdateWindow();
	} while (myWindow.IsWindowNotClosed());
	return 0;
}