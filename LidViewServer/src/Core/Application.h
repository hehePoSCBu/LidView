#pragma once

#include<glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>
#include <memory>

#if defined(WIN32)
	#include <Windows.h>
#elif defined(__linux__) || defined(linux) || defined(__unix__)
	#include <X11/Xlib.h>
#endif

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

#if defined(WIN32)
	HWND hwnd;
	HIMC hIMC;
#elif defined(__linux__) || defined(linux) || defined(__unix__)
	Window x11_window;
	Display* x11_display;
#endif
};