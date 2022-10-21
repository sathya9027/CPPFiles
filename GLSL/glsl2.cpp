#include "Common.h"
//draw cube
Window window;
Shader cubeShader;
GameObject cube;
Camera3D camera3D;

void Create() {
	glewInit();
	cubeShader.ShaderInit();
	cubeShader.ProcessShaderFile("3DFS.glsl", GL_FRAGMENT_SHADER);
	cubeShader.ProcessShaderFile("3DVS.glsl", GL_VERTEX_SHADER);
	cube.CreateBuffers();
	glEnable(GL_DEPTH_TEST);
}

void Render() {
	cubeShader.ApplyShader();
	camera3D.Update(window, cubeShader);
	cube.Update(vec3(0, 0, 0), cubeShader);
	cube.Draw(cubeShader);
}

int main() {
	window.CreateGameWindow(800, 800, "My Game Window", false);
	Create();
	do {
		window.SetBGColor(0.1, 0.25, 0.3, 0);
		Render();
		window.UpdateWindow();
	} while (window.IsWindowNotClosed());
	return 0;
}