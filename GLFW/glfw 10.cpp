//drawing bird
#pragma comment(lib,"OpenGL32.lib")
#include<iostream>
#include<GLFW/glfw3.h>
#define DEG2RAD 3.14159/180.0
using namespace std;
void Head(float originX, float originY, float radius, int degree, GLenum LINE_TYPE) {
	glColor3f(1.0f, 1.0f, 1.0f);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
	glBegin(LINE_TYPE);
	glVertex2f(originX, originY);
	float theta, x, y;
	x = originX;
	y = originY;
	for (int i = 0; i <= degree; i++)
	{
		theta = i * DEG2RAD;
		float glX = x + radius * cos(theta);
		float glY = y + radius * sin(theta);
		glVertex2d(glX, glY);
	}
	glEnd();
}
void BirdBody(float radiusX, float radiusY, float originX, float originY, GLenum LINE_TYPE) {
	int i;
	glColor3f(1.0f, 1.0f, 1.0f);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
	glBegin(LINE_TYPE);

	for (i = 0; i < 360; i++)
	{
		float rad = i * DEG2RAD;
		float glX = cos(rad) * radiusX + originX;
		float glY = sin(rad) * radiusY + originY;
		glVertex2f(glX, glY);
	}

	glEnd();
}
void BirdWings(float radiusX, float radiusY, float originX, float originY, GLenum LINE_TYPE) {
	int i;
	glColor3f(0.0f, 0.0f, 0.0f);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
	glBegin(LINE_TYPE);

	for (i = 0; i < 360; i++)
	{
		float rad = i * DEG2RAD;
		float glX = cos(rad) * radiusX + originX;
		float glY = sin(rad) * radiusY + originY;
		glVertex2f(glX, glY);
	}

	glEnd();
}
void BirdEye(float radiusX, float radiusY, float originX, float originY, GLenum LINE_TYPE) {
	int i;
	glColor3f(0.0f, 0.0f, 0.0f);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
	glBegin(LINE_TYPE);

	for (i = 0; i < 360; i++)
	{
		float rad = i * DEG2RAD;
		float glX = cos(rad) * radiusX + originX;
		float glY = sin(rad) * radiusY + originY;
		glVertex2f(glX, glY);
	}

	glEnd();
}
void Tail() {
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.35f, 0.0f);
	glVertex2f(0.45f, -0.1f);
	glVertex2f(0.45f, 0.1f);
	glEnd();
}
void Legs() {
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.1f, -0.18f);
	glVertex2f(0.25f, -0.325f);
	glVertex2f(0.125f, -0.4f);
	glVertex2f(-0.1f, -0.18f);
	glVertex2f(-0.25f, -0.325f);
	glVertex2f(-0.125f, -0.4f);
	glEnd();
}
void Nose() {
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.525f, 0.275f);
	glVertex2f(-0.675f, 0.2f);
	glVertex2f(-0.525f, 0.2f);
	glVertex2f(-0.525f, 0.2f);
	glVertex2f(-0.665f, 0.1f);
	glVertex2f(-0.5f, 0.14f);
	glEnd();
}
int main() {
	glfwInit();
	GLFWwindow* window;
	window = glfwCreateWindow(800, 800, "My Window", NULL, NULL);
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
		//bird
		Head(-0.362f, 0.25f, 0.175f, 360, GL_TRIANGLE_FAN);
		BirdEye(0.025, 0.05, -0.4, 0.270, GL_TRIANGLE_FAN);
		BirdBody(0.35, 0.2, 0.0, 0.0, GL_TRIANGLE_FAN);
		BirdWings(0.2, 0.1, 0.05, 0.0, GL_TRIANGLE_FAN);
		Tail();
		Legs();
		Nose();
		//window
		glfwSwapBuffers(window);
		glfwPollEvents();
	} while (glfwWindowShouldClose(window) == 0);
	return 0;
}