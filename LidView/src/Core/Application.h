#pragma once

#include"../App.h"
#include"Object.h"
#include<vector>
#include<memory>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void process_input_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

class Application
{
public:
	Application(int argc=0, char *argv[]=nullptr);
	~Application();
	int run();

	void add_object(std::unique_ptr<Object> object);
private:
	GLFWwindow* window;

	std::vector<std::unique_ptr<Object>> objects;
	const unsigned int  SCR_WIDTH = 1280;
	const unsigned int  SCR_HEIGHT = 810;
};