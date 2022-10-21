//drawing flag and chakra and filling color
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
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
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
	glVertex2f(0.0f, 0.45f);
	glVertex2f(0.5f, 0.45f);
	glVertex2f(0.5f, 0.15f);
	glVertex2f(0.5f, 0.15f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.0f, 0.45f);
	glVertex2f(0.0f, 0.45f);
	glVertex2f(-0.5f, 0.45f);
	glVertex2f(-0.5f, 0.15f);
	glVertex2f(-0.5f, 0.15f);
	glVertex2f(0.0f, 0.15f);
	glVertex2f(0.0f, 0.45f);
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
void DrawCircle_R(float originX, float originY, float radius, int sector, GLenum LINE_TYPE) {
	glLineWidth(2.0f);
	glColor3f(0.0f, 0.0f, 0.5f);
	glPolygonMode(GL_FRONT, GL_LINE);
	glPolygonMode(GL_BACK, GL_LINE);
	glBegin(LINE_TYPE);
	glVertex2f(originX, originY);
	float theta, x, y;
	x = originX;
	y = originY;
	float pi = 3.14;
	for (int i = 0; i <= sector; i++)
	{
		theta = (2 * pi * i) / sector;
		glVertex2d(x + radius * cos(theta), y + radius * sin(theta));
	}
	glEnd();
}
void DrawCircle_D(float originX, float originY, float radius, int degree, GLenum LINE_TYPE) {
	glColor3f(0.0f, 0.0f, 0.5f);
	glPolygonMode(GL_FRONT, GL_LINE);
	glPolygonMode(GL_BACK, GL_LINE);
	glBegin(LINE_TYPE);
	glVertex2f(originX, originY);
	float theta, x, y;
	x = originX;
	y = originY;
	float d2r = 3.14 / 180;
	for (int i = 0; i <= degree; i++)
	{
		theta = i * d2r;
		glVertex2d(x + radius * cos(theta), y + radius * sin(theta));
	}
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
		//draw circle
		DrawCircle_R(0.0f, 0.0f, 0.13, 24, GL_TRIANGLE_FAN);
		//DrawCircle_D(0.0f, 0.0f, 1.0f, 90, GL_TRIANGLE_FAN);
		//draw window constantly until loop ends
		glfwSwapBuffers(window);
		glfwPollEvents();
	} while (glfwWindowShouldClose(window) == 0);
	return 0;
}