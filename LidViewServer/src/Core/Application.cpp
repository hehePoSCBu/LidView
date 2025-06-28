#include "Application.h"
#include <cstdlib>
#include<iostream>

#if defined(WIN32)
	#define GLFW_EXPOSE_NATIVE_WIN32
#elif defined(__linux__)
	#define GLFW_EXPOSE_NATIVE_X11
#endif
#include<GLFW/glfw3native.h>

#include <imm.h>
#pragma comment(lib, "imm32.lib")

Application::Application(int argc, char *argv[])
{
	// Initialize GLFW
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

	// Create a windowed mode window and its OpenGL context
	window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LidView", NULL, NULL);
	if (!window)
	{
		std::cerr << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	// Make the window's context current
	glfwMakeContextCurrent(window);
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
	glfwSetKeyCallback(window, process_input_callback);
	
#if defined(WIN32)
	hwnd = glfwGetWin32Window(window);

	// 关闭输入法，保证按键不被IME拦截
	hIMC = ImmGetContext(hwnd);
	if (hIMC) {
		ImmSetOpenStatus(hIMC, FALSE);
		ImmReleaseContext(hwnd, hIMC);
	}
#elif defined(__linux__)
	x11_window = glfwGetX11Window(window);
	x11_display = glfwGetX11Display();
#endif
	// Initialize GLAD
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cerr << "Failed to initialize GLAD" << std::endl;
		exit(EXIT_FAILURE);
	}
}

Application::~Application()
{
	// Clean up and close the window
	glfwDestroyWindow(window);
	glfwTerminate();
}

int Application::run()
{
	glClearColor(0.3f, 0.6f, 0.9f, 1.0f);
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);	
		glfwPollEvents();
	}
	return 0;
}

void process_input_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (action == GLFW_PRESS)
	{
		switch (key)
		{
		case GLFW_KEY_W:
			glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
			break;

		case GLFW_KEY_ESCAPE:
			glfwSetWindowShouldClose(window, true);
			break;
		}
	}
	else if (action == GLFW_RELEASE)
	{
		switch (key)
		{

		}
	}
	else if (action == GLFW_REPEAT)
	{
		switch (key)
		{
		}
	}
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}