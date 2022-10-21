//creating a window
#include<iostream>
#include<GLFW/glfw3.h>
using namespace std;
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
		//draw window constantly until loop ends
		glfwSwapBuffers(window);
		glfwPollEvents();
	} while (glfwWindowShouldClose(window) == 0);
	return 0;
}