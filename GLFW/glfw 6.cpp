//drawing house and filling color
#pragma comment(lib,"OpenGL32.lib")
#include<iostream>
#include<GLFW/glfw3.h>
using namespace std;
void Points() {
	//point
	glPointSize(5.0f);
	glBegin(GL_POINTS);
	glColor3f(0.56f, 0.35f, 0.23f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.35f, 0.0f);
	glVertex2f(0.35f, -0.6f);
	glVertex2f(0.35f, -0.6f);
	glVertex2f(-0.35f, -0.6f);
	glVertex2f(-0.35f, -0.6f);
	glVertex2f(-0.35f, 0.0f);
	glVertex2f(-0.25f, -0.15f);
	glVertex2f(-0.25f, -0.45f);
	glVertex2f(-0.25f, -0.45f);
	glVertex2f(-0.05f, -0.45f);
	glVertex2f(-0.05f, -0.45f);
	glVertex2f(-0.05f, -0.15f);
	glVertex2f(-0.05f, -0.15f);
	glVertex2f(-0.25f, -0.15f);
	glVertex2f(-0.15f, -0.15f);
	glVertex2f(-0.15f, -0.45f);
	glVertex2f(-0.25f, -0.3f);
	glVertex2f(-0.15f, -0.3f);
	glVertex2f(-0.05f, -0.3f);
	glVertex2f(0.05f, -0.6f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.275f, -0.1f);
	glVertex2f(0.275f, -0.1f);
	glVertex2f(0.275f, -0.6f);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(-0.1f, 0.375f);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.25f);
	glEnd();
}
void Lines() {
	//house
	glLineWidth(3.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_LINES);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.35f, 0.0f);
	glVertex2f(0.35f, -0.6f);
	glVertex2f(0.35f, -0.6f);
	glVertex2f(-0.35f, -0.6f);
	glVertex2f(-0.35f, -0.6f);
	glVertex2f(-0.35f, 0.0f);
	glVertex2f(-0.25f, -0.15f);
	glVertex2f(-0.25f, -0.45f);
	glVertex2f(-0.25f, -0.45f);
	glVertex2f(-0.05f, -0.45f);
	glVertex2f(-0.05f, -0.45f);
	glVertex2f(-0.05f, -0.15f);
	glVertex2f(-0.05f, -0.15f);
	glVertex2f(-0.25f, -0.15f);
	glVertex2f(-0.15f, -0.15f);
	glVertex2f(-0.15f, -0.45f);
	glVertex2f(-0.25f, -0.3f);
	glVertex2f(-0.05f, -0.3f);
	glVertex2f(0.05f, -0.6f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.275f, -0.1f);
	glVertex2f(0.275f, -0.1f);
	glVertex2f(0.275f, -0.6f);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(-0.1f, 0.375f);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.25f);
	glEnd();
}
void Triangles() {
	//1
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(-0.4f, 0.0f);
	glEnd();
	//2
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.35f, 0.0f);
	glVertex2f(0.35f, -0.6f);
	glVertex2f(-0.35f, -0.6f);
	glVertex2f(-0.35f, -0.6f);
	glVertex2f(-0.35f, 0.0f);
	glVertex2f(0.35f, 0.0f);
	glEnd();
	//3
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.25f, -0.15f);
	glVertex2f(-0.25f, -0.45f);
	glVertex2f(-0.05f, -0.45f);
	glVertex2f(-0.05f, -0.45f);
	glVertex2f(-0.05f, -0.15f);
	glVertex2f(-0.25f, -0.15f);
	glEnd();
	//4
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.05f, -0.6f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.275f, -0.1f);
	glVertex2f(0.275f, -0.1f);
	glVertex2f(0.275f, -0.6f);
	glVertex2f(0.05f, -0.6f);
	glEnd();
	//5
	glColor3f(1.0f, 0.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(-0.1f, 0.375f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.25f);
	glVertex2f(-0.1f, 0.375f);
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