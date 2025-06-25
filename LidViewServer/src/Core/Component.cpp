#include"Component.h"

RenderComponent::RenderComponent(const char* model_path, const char* vertex_shader_path, const char* fragment_shader_path)
	:Component(ComponentData(RenderComponent, component_cout, 0, 0, 0, nullptr)) {
},
this->shader(vertex_shader_pdth, fragment_sher_path),
this->model(model_path)
{
}