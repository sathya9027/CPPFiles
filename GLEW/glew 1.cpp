//drawing a point(glew)
#pragma comment(lib,"OpenGL32.lib")
#include<iostream>
#include<GL/glew.h>
#include<GLFW/glfw3.h>
using namespace std;
GLfloat vertex[] = { 0.0f, 0.0f };
GLuint VBO;
void DrawPoint() {
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertex), vertex, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);
	glDrawArrays(GL_POINTS, 0, 1);
	glDisableVertexAttribArray(0);
	glDeleteBuffers(1, &VBO);
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
		DrawPoint();
		//window
		glfwSwapBuffers(window);
		glfwPollEvents();
	} while (glfwWindowShouldClose(window) == 0);
	return 0;
}