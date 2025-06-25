#pragma once

#include<glad/glad.h>
#include <GLFW/glfw3.h>
#include "Object.h"
#include "Level.h"
#include <vector>
#include <memory>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void process_input_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

class Application
{
public:
	Application(int argc=0, char *argv[]=nullptr);
	~Application();
	int run();

	void RegisterObject(const Object* obj);

private:
	GLFWwindow* window;

	Level level;

	const unsigned int  SCR_WIDTH = 1280;
	const unsigned int  SCR_HEIGHT = 810;
};