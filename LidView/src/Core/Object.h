#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include"../App.h"
#include"../Tools/shader.h"

class Object
{
public:
	Object(const std::vector<float>& vertices, const std::vector<float>& texCoords, const char* vertex_shader_path, const char* fragment_shader_path);
	~Object();
	Object(const Object&) = delete;
	Object& operator=(const Object&) = delete;
	Object(Object&&) = default;
	Object& operator=(Object&&) = default;
	void draw();
private:
	std::vector<float> vertices;
	std::vector<float> texCoords;

	unsigned int VAO = 0, VBO = 0;
	std::unique_ptr<Shader> shader;
};