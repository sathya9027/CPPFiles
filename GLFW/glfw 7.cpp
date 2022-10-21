//drawing flag and filling color
#pragma comment(lib,"OpenGL32.lib")
#include<iostream>
#include<GLFW/glfw3.h>
using namespace std;
void Points() {
	
}
void Lines() {
	
}
void Triangles() {
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.5f, 0.15f);
	glVertex2f(0.5f, -0.15f);
	glVertex2f(0.5f, -0.15f);
	glVertex2f(0.0f, -0.15f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(-0.5f, 0.15f);
	glVertex2f(-0.5f, -0.15f);
	glVertex2f(-0.5f, -0.15f);
	glVertex2f(0.0f, -0.15f);
	glVertex2f(0.0f, 0.15f);
	glColor3f(1.0f, 0.6f, 0.2f);
	glVertex2f(0.0f, 0.45);
	glVertex2f(0.5f, 0.45);
	glVertex2f(0.5f, 0.15);
	glVertex2f(0.5f, 0.15);
	glVertex2f(0.0f, 0.15);
	glVertex2f(0.0f, 0.45);
	glVertex2f(0.0f, 0.45);
	glVertex2f(-0.5f, 0.45);
	glVertex2f(-0.5f, 0.15);
	glVertex2f(-0.5f, 0.15);
	glVertex2f(0.0f, 0.15);
	glVertex2f(0.0f, 0.45);
	glColor3f(0.07f, 0.53f, 0.03f);
	glVertex2f(0.0f, -0.15f);
	glVertex2f(0.5f, -0.15f);
	glVertex2f(0.5f, -0.45f);
	glVertex2f(0.5f, -0.45f);
	glVertex2f(0.0f, -0.45f);
	glVertex2f(0.0f, -0.15f);
	glVertex2f(0.0f, -0.15f);
	glVertex2f(-0.5f, -0.15f);
	glVertex2f(-0.5f, -0.45f);
	glVertex2f(-0.5f, -0.45f);
	glVertex2f(0.0f, -0.45f);
	glVertex2f(0.0f, -0.15f);
	glEnd();
}
int main() {
	glfwInit();
	GLFWwindow* window;
	window = glfwCreateWindow(800, 600, "My Window", NULL, NULL);
	if (window == NULL) {
		cout << "Failed to create GLFW window" << endl;
		glfwTerminate();
	}
	else {
		glfwMakeContextCurrent(window);
	}
	do
	{
		//background color
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		//house inner fill color
		Triangles();
		//house border lines
		Lines();
		//vertex points
		Points();
		//draw window constantly until loop ends
		glfwSwapBuffers(window);
		glfwPollEvents();
	} while (glfwWindowShouldClose(window) == 0);
	return 0;
}