#include "Common.h"
//draw chair using 6 gameObjects
Window window;
Shader cubeShader;
GameObject leg1;
GameObject leg2;
GameObject leg3;
GameObject leg4;
GameObject seat;
GameObject back;
Camera3D camera3D;

void Create() {
	glewInit();
	cubeShader.ShaderInit();
	cubeShader.ProcessShaderFile("3DTextureFS.glsl", GL_FRAGMENT_SHADER);
	cubeShader.ProcessShaderFile("3DTextureVS.glsl", GL_VERTEX_SHADER);
	leg1.CreateBuffers(0.025, 0.25, 0.025);
	leg1.LoadTexture("leg.png");
	leg2.CreateBuffers(0.025, 0.25, 0.025);
	leg2.LoadTexture("leg.png");
	leg3.CreateBuffers(0.025, 0.25, 0.025);
	leg3.LoadTexture("leg.png");
	leg4.CreateBuffers(0.025, 0.25, 0.025);
	leg4.LoadTexture("leg.png");
	seat.CreateBuffers(0.25, 0.05, 0.25);
	seat.LoadTexture("seat.png");
	back.CreateBuffers(0.25, 0.25, 0.05);
	back.LoadTexture("seat.png");
	glEnable(GL_DEPTH_TEST);
}

void Render() {
	cubeShader.ApplyShader();
	camera3D.Update(window, cubeShader);
	leg1.Update(vec3(0.355, -0.1725, -0.005), cubeShader);
	leg1.Draw(cubeShader);
	leg2.Update(vec3(-0.225, -0.275, -0.25), cubeShader);
	leg2.Draw(cubeShader);
	leg3.Update(vec3(0.075, -0.1, -0.325), cubeShader);
	leg3.Draw(cubeShader);
	leg4.Update(vec3(0, -0.4, 0.125), cubeShader);
	leg4.Draw(cubeShader);
	seat.Update(vec3(0, -0.05, 0), cubeShader);
	seat.Draw(cubeShader);
	back.Update(vec3(-0.235, 0.25, -0.25), cubeShader);
	back.Draw(cubeShader);
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