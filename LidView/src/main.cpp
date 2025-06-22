// main.cpp: 定义应用程序的入口点。
//
#include "App.h"
#include "Core/Object.h"
#include "Core/Application.h"
#include <vector>
#include <memory>

std::vector<float> vertices = {
	//     ---- 位置 ----       ---- 颜色 ----     - 纹理坐标 -
		 0.5f,  0.5f, 0.0f,   1.0f, 0.0f, 0.0f,   1.0f, 1.0f,   // 右上
		 0.5f, -0.5f, 0.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f,   // 右下
		-0.5f, -0.5f, 0.0f,   0.0f, 0.0f, 1.0f,   0.0f, 0.0f,   // 左下
		-0.5f,  0.5f, 0.0f,   1.0f, 1.0f, 0.0f,   0.0f, 1.0f    // 左上
};

std::vector<float> texCoord = {
	1.0f, 1.0f, // 右上
	1.0f, 0.0f, // 右下
	0.0f, 0.0f, // 左下
	0.0f, 1.0f  // 左上
};

// Add default indices for a quad (two triangles)
std::vector<unsigned int> indices = {
	0, 1, 2,
	0, 2, 3
};

int main()
{
	Application* app = new Application();
	auto triangle = std::make_unique<Object>(
		vertices,
		texCoord, // Pass texCoords
		indices,  // Pass indices
		"E:/dev/LidView/LidView/src/Shader/Objects/TriangleShader.vert",
		"E:/dev/LidView/LidView/src/Shader/Objects/TriangleShader.frag",
		"E:/dev/LidView/assets/container.jpg" // Texture path
	);
	app->add_object(std::move(triangle));

	app->run();
	return 0;
}
