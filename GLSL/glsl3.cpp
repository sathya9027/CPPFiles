#include "Common.h"
//draw 2 cubes
Window window;
Shader cubeShader;
GameObject cube1;
GameObject cube2;
Camera3D camera3D;

void Create() {
	glewInit();
	cubeShader.ShaderInit();
	cubeShader.ProcessShaderFile("3DFS.glsl", GL_FRAGMENT_SHADER);
	cubeShader.ProcessShaderFile("3DVS.glsl", GL_VERTEX_SHADER);
	cube1.CreateBuffers(0.2,0.2,0.2,1,0,1);
	cube2.CreateBuffers(0.2,0.2,0.2,0,1,1);
	glEnable(GL_DEPTH_TEST);
}

void Render() {
	cubeShader.ApplyShader();
	camera3D.Update(window, cubeShader);
	cube1.Update(vec3(0, -.5, 0), cubeShader);
	cube1.Draw(cubeShader);
	cube2.Update(vec3(0, .5, 0), cubeShader);
	cube2.Draw(cubeShader);
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