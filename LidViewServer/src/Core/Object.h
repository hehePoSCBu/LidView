#pragma once

#include<glad/glad.h>
#include<GLFW/glfw3.h>

#include<vector>

#include"Component.h"

class Object
{
public:
	Object() = default;
	void add_component(ComponentData data);

	int get_id();
private:
	char* name;
	int id;
	std::vector<Component*> components;
};