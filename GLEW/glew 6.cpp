//drawing a triangle using external vertex and fragment shader(glew)

#include "Common.h" //it has all include syntax

GLuint programObj;
GLuint fragmentShaderObj;
GLuint vertexShaderObj;

string ReadShaderFile(const char* filename) {
	string code;
	ifstream file(filename);
	if (!file.good()) {
		cout << "Can't read file " << filename << endl;
		terminate();
	}
	else {
		file.seekg(0, ios::end);
		code.resize(file.tellg());
		file.seekg(0, ios::beg);
		file.read(&code[0], code.size());
		file.close();
	}
	return code;
}
void InitShaders() {
	//drawing triangle
	glDrawArrays(GL_TRIANGLES, 0, 3);

	//initializing fragment shader
	string fShaderCode = ReadShaderFile("FragmentShader.glsl");

	//reading fragment shader
	fragmentShaderObj = glCreateShader(GL_FRAGMENT_SHADER);
	const char* fCode = fShaderCode.c_str();
	const int fSize = fShaderCode.size();
	glShaderSource(fragmentShaderObj, 1, &fCode, &fSize);

	//compiling fragment shader
	glCompileShader(fragmentShaderObj);

	//initializing vertex shader
	string vShaderCode = ReadShaderFile("VertexShader.glsl");

	//reading vertex shader
	vertexShaderObj = glCreateShader(GL_VERTEX_SHADER);
	const char* vCode = vShaderCode.c_str();
	const int vSize = vShaderCode.size();
	glShaderSource(vertexShaderObj, 1, &vCode, &vSize);

	//compiling vertex shader
	glCompileShader(vertexShaderObj);

	programObj = glCreateProgram();
	glAttachShader(programObj, fragmentShaderObj);		//for fragment shader
	glAttachShader(programObj, vertexShaderObj);		//for vertex shader
	glLinkProgram(programObj);
	glUseProgram(programObj);
}

//main function
int main() {
	Window gameWindow;
	gameWindow.CreateWindow(800, 800, "Game Window", false);
	glewInit();
	do {
		gameWindow.SetBGColor(0, 0, 0, 0);
		InitShaders();
		gameWindow.Update();
	} while (gameWindow.IsWindowNotClosed());
	return 0;
}