// main.cpp: 定义应用程序的入口点。
//
#include "App.h"
#include "Core/Object.h"
#include "Core/Application.h"
#include <vector>
#include <memory>

std::vector<float> vertices = {
	// positions
	-0.5f, -0.5f, 0.0f, // bottom left
	 0.5f, -0.5f, 0.0f, // bottom right
	 0.0f,  0.5f, 0.0f  // top
};

std::vector<float> texCoord = {
	0.0f, 0.0f, // 左下角
	1.0f, 0.0f, // 右下角
	0.5f, 1.0f  // 上中
};

int main()
{
	Application* app = new Application();
	auto triangle = std::make_unique<Object>(
		vertices,
		texCoord, // Pass empty texCoords
		"E:/dev/LidView/LidView/src/Shader/Objects/TriangleShader.vert",
		"E:/dev/LidView/LidView/src/Shader/Objects/TriangleShader.frag"
	);
	app->add_object(std::move(triangle));

	app->run();
	return 0;
}
