//drawing texture using external vertex and fragment shader(glew)(soil)

#include "Common.h" //it has all include syntax

GLfloat texture[] = {
	//texture vertices		//texture coords
	0.5f,  0.5f,			1.0f, 0.0f,
	0.5f, -0.5f,			1.0f, 1.0f,
	-0.5f, -0.5f,			0.0f, 1.0f,
	-0.5f,  0.5f, 			0.0f, 0.0f

};

GLuint VBO, EBO, vertexAttribute, uvAttribute;
GLuint indices[] = { 
	0, 1, 2,	// triangle 1
	2, 3, 0		// triangle 2
};

Window myWindow;		//window class
Shader myShader;		//shader class

//user define function
GLuint loadTexture(const char* filename) {
	GLuint texture;
	glGenTextures(1, &texture);
	texture = SOIL_load_OGL_texture
	(
		filename,
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		4
	);
	return texture;
}

void DrawImage() {
	//generating vbo
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(texture), texture, GL_STATIC_DRAW);

	//generating ebo
	glGenBuffers(1, &EBO);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW); 
	
	vertexAttribute = glGetAttribLocation(myShader.GetProgramObject(), "_vertices");
	glVertexAttribPointer(vertexAttribute, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)0);
	/*out of five column's of each row's
	take first two column values
	for vertices*/

	uvAttribute = glGetAttribLocation(myShader.GetProgramObject(), "_uvcoords");
	glVertexAttribPointer(uvAttribute, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), (void*)(2 * sizeof(float)));
	/*out of five column's of each row's
	take last two column values
	for uv coords*/

	glEnableVertexAttribArray(vertexAttribute);
	glEnableVertexAttribArray(uvAttribute);

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
	//importing image
	glBindTexture(GL_TEXTURE_2D, loadTexture("mario.png"));

	glDisableVertexAttribArray(vertexAttribute);
	glDisableVertexAttribArray(uvAttribute);
}

//main function
int main() {

	myWindow.CreateWindow(800, 800, "Game Window", false);

	myShader.ShaderInit();
	myShader.ProcessShaderFile("FragmentShader.glsl", GL_FRAGMENT_SHADER);
	myShader.ProcessShaderFile("VertexShader.glsl", GL_VERTEX_SHADER);

	do {
		myWindow.SetBGColor(0, 0, 0, 0);
		DrawImage();
		myShader.ApplyShader();
		myWindow.UpdateWindow();
	} while (myWindow.IsWindowNotClosed());
	return 0;
}