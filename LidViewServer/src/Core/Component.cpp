#include"Component.h"

void RenderComponent::onCreate(const char* vertex_shader_path, const char* fragment_shader_path, const char* model_path)
{
	this->shader=&Shader(vertex_shader_path,fragment_shader_path);
	this->model = &Model(model_path);
}