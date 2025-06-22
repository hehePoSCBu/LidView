// main.cpp: 定义应用程序的入口点。
//
#include "App.h"
#include "Core/Object.h"
#include "Core/Application.h"
#include <vector>
#include <memory>

int main()
{
	Application* app = new Application();
	auto test = std::make_unique<Object>(
		vertices,
		texCoord, // Pass texCoords
		indices,  // Pass indices
		"E:/dev/LidView/LidView/src/Shader/Objects/TriangleShader.vert",
		"E:/dev/LidView/LidView/src/Shader/Objects/TriangleShader.frag",
		"E:/dev/LidView/assets/container.jpg" // Texture path
	);
	app->add_object(std::move(test));

	app->run();
	return 0;
}
