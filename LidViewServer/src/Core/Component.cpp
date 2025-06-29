#include"Component.h"

void RenderComponent::initialize(Shader* shader, Model* model)
{
	this->shader = shader;
	this->model = model;
}