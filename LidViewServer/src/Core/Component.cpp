#include"Component.h"

void RenderComponent::onCreate(Shader* shader, Model* model)
{
	this->shader = shader;
	this->model = model;
}