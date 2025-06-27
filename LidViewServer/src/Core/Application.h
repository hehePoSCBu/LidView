#pragma once

#include<glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>
#include <memory>
#include <Windows.h>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void process_input_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

class Application
{
public:
	Application(int argc, char *argv[]);
	~Application();
	int run();
private:
	GLFWwindow* window;

	const unsigned int  SCR_WIDTH = 1280;
	const unsigned int  SCR_HEIGHT = 810;

	HWND hwnd;
};