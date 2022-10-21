//drawing a rectangle using external vertex and fragment shader(glew)

#include "Common.h" //it has all include syntax

GLfloat triangle[] = {
	//vertices			//colors
	0.0f, 0.6f,			1.0f, 1.0f, 0.0f,
	0.6f, -0.6f,		0.0f, 1.0f, 1.0f,
	-0.6f, -0.6f,		1.0f, 0.0f, 1.0f
};
GLfloat rectangle[] = {
	//vertices			//colors
	0.0f, 0.0f,			1.0f, 1.0f, 0.0f,
	0.0f, 0.5f,			0.0f, 1.0f, 1.0f,
	0.5f, 0.0f,			1.0f, 0.0f, 1.0f,

	0.5f, 0.0f,			1.0f, 0.0f, 1.0f,
	0.5f, 0.5f,			1.0f, 1.0f, 0.0f,
	0.0f, 0.5f,			0.0f, 1.0f, 1.0f
};

GLuint VBO, vertexAttribute, colorAttribute;

Window myWindow;		//window class
Shader myShader;		//shader class

//user define function
void DrawTriangle() {
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(triangle), triangle, GL_STATIC_DRAW);

	vertexAttribute = glGetAttribLocation(myShader.GetProgramObject(), "_vertices");
	glVertexAttribPointer(vertexAttribute, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (void*)0);
	/*out of five column's of each row's 
	take first two column values
	for vertices*/

	colorAttribute = glGetAttribLocation(myShader.GetProgramObject(), "_color");
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
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(rectangle), rectangle, GL_STATIC_DRAW);

	vertexAttribute = glGetAttribLocation(myShader.GetProgramObject(), "_vertices");
	glVertexAttribPointer(vertexAttribute, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (void*)0);
	/*out of five column's of each row's
	take first two column values
	for vertices*/

	colorAttribute = glGetAttribLocation(myShader.GetProgramObject(), "_color");
	glVertexAttribPointer(colorAttribute, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (void*)(2 * sizeof(GLfloat)));
	/*out of five column's of each row's
	take last three column values
	for colors*/

	glEnableVertexAttribArray(vertexAttribute);
	glEnableVertexAttribArray(colorAttribute);
	glDrawArrays(GL_TRIANGLES, 0, 6);
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