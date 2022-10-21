//smiley face
#pragma comment(lib,"OpenGL32.lib")
#include<iostream>
#include<GLFW/glfw3.h>
using namespace std;
void CricleBackgroundBorder(float radius, int sector, GLenum LINE_TYPE) {
	glLineWidth(30.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPolygonMode(GL_FRONT, GL_LINE);
	glPolygonMode(GL_BACK, GL_LINE);
	glBegin(LINE_TYPE);
	glVertex2f(0.0f, 0.0f);
	float theta, x, y;
	float pi = 3.14;
	for (int i = 0; i < sector; i++)
	{
		theta = (2 * pi * i) / sector;
		x = radius * cos(theta);
		y = radius * sin(theta);
		glVertex2d(x, y);
	}
	glVertex2f(radius, 0.0f);
	glEnd();
}
void CircleBackground(float radius, int degree, GLenum LINE_TYPE) {
	glColor3f(0.98f, 0.85f, 0.31f);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
	glBegin(LINE_TYPE);
	glVertex2f(0.0f, -0.0f);
	float theta, x, y;
	float d2r = 3.14 / 180;
	for (int i = 0; i < degree; i++)
	{
		theta = i * d2r;
		x = radius * cos(theta);
		y = radius * sin(theta);
		glVertex2d(x, y);
	}
	glVertex2f(radius, 0.0f);
	glEnd();
}
void Mouth(float originX, float originY, float radius, int degree, GLenum LINE_TYPE) {
	glColor3f(0.53f, 0.09f, 0.27f);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
	glBegin(LINE_TYPE);
	glVertex2f(originX, originY);
	float theta, x, y;
	x = originX;
	y = originY;
	float d2r = 3.14 / 180;
	for (int i = 180; i <= degree; i++)
	{
		theta = i * d2r;
		float glX = x + radius * cos(theta);
		float glY = y + radius * sin(theta);
		glVertex2d(glX, glY);
	}
	glEnd();
}
void MouthBorder(float originX, float originY, float radius, int degree, GLenum LINE_TYPE) {
	glLineWidth(30.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPolygonMode(GL_FRONT, GL_LINE);
	glPolygonMode(GL_BACK, GL_LINE);
	glBegin(LINE_TYPE);
	glVertex2f(originX, originY);
	float theta, x, y;
	x = originX;
	y = originY;
	float d2r = 3.14 / 180;
	for (int i = 180; i <= degree; i++)
	{
		theta = i * d2r;
		float glX = x + radius * cos(theta);
		float glY = y + radius * sin(theta);
		glVertex2d(glX, glY);
	}
	glEnd();
}
void Eye(float originX, float originY, float radius, int degree, GLenum LINE_TYPE) {
	glColor3f(1.0f, 1.0f, 1.0f);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
	glBegin(LINE_TYPE);
	glVertex2f(originX, originY);
	float theta, x, y;
	x = originX;
	y = originY;
	float d2r = 3.14 / 180;
	for (int i = 0; i <= degree; i++)
	{
		theta = i * d2r;
		float glX = x + radius * cos(theta);
		float glY = y + radius * sin(theta);
		glVertex2d(glX, glY);
	}
	glEnd();
}
void EyeBorder(float originX, float originY, float radius, int degree, GLenum LINE_TYPE) {
	glLineWidth(30.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
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
		float glX = x + radius * cos(theta);
		float glY = y + radius * sin(theta);
		glVertex2d(glX, glY);
	}
	glEnd();
}
void EyePupil(float originX, float originY, float radius, int degree, GLenum LINE_TYPE) {
	glColor3f(0.0f, 0.0f, 0.0f);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
	glBegin(LINE_TYPE);
	glVertex2f(originX, originY);
	float theta, x, y;
	x = originX;
	y = originY;
	float d2r = 3.14 / 180;
	for (int i = 0; i <= degree; i++)
	{
		theta = i * d2r;
		float glX = x + radius * cos(theta);
		float glY = y + radius * sin(theta);
		glVertex2d(glX, glY);
	}
	glEnd();
}
void Tongue(float originX, float originY, float radius, int degree, GLenum LINE_TYPE) {
	glColor3f(0.98f, 0.75f, 0.87f);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_FILL);
	glBegin(LINE_TYPE);
	glVertex2f(originX, originY);
	float theta, x, y;
	x = originX;
	y = originY;
	float d2r = 3.14 / 180;
	for (int i = 25; i <= degree; i++)
	{
		theta = i * d2r;
		float glX = x + radius * cos(theta);
		float glY = y + radius * sin(theta);
		glVertex2d(glX, glY);
	}
	glEnd();
}
int main() {
	glfwInit();
	GLFWwindow* window;
	window = glfwCreateWindow(800, 800, "Smiley", NULL, NULL);
	if (window == NULL) {
		cout << "Failed to create GLFW window" << endl;
		glfwTerminate();
	}
	else {
		glfwMakeContextCurrent(window);
	}
	do
	{
		//window
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		//content
		CricleBackgroundBorder(0.95, 360, GL_LINE_LOOP); 
		CircleBackground(0.95f, 360, GL_TRIANGLE_FAN);
		Mouth(-0.05f, -0.1f, 0.75f, 360, GL_TRIANGLE_FAN);
		Tongue(0.1f, -0.825f, 0.4f, 180, GL_TRIANGLE_FAN);
		MouthBorder(-0.05f, -0.1f, 0.75f, 360, GL_LINE_LOOP);
		Eye(-0.5f, 0.175f, 0.35f, 180, GL_TRIANGLE_FAN);
		EyeBorder(-0.5f, 0.175f, 0.35f, 180, GL_LINE_LOOP);
		Eye(0.3f, 0.175f, 0.35f, 180, GL_TRIANGLE_FAN);
		EyeBorder(0.3f, 0.175f, 0.35f, 180, GL_LINE_LOOP);
		EyePupil(0.45f, 0.378f, 0.125f, 360, GL_TRIANGLE_FAN);
		EyePupil(-0.375f, 0.4f, 0.125f, 360, GL_TRIANGLE_FAN);
		//window
		glfwSwapBuffers(window);
		glfwPollEvents();
	} while (glfwWindowShouldClose(window) == 0);
	return 0;
}