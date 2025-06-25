#include<Tools/model.h>

enum ComponentType
{
	RenderComponent = 0,
	PhysicsComponent = 1,
	AudioComponent = 2,
	TransformComponent = 3,
	ColliderComponent = 4,
	AnimationComponent = 5,
	UserInterfaceComponent = 6,
	NetWorkComponent = 7,
	InputComponent = 8,
	HealthComponent = 9,
	InventoryComponent = 10,
	ScriptComponent = 11
};

struct ComponentData
{
	int id;
	ComponentType type;
	int flags;
	int parentId;
	int childCount;
	int* children;
};

class Component
{
public:
	Component(ComponentData data) : attribute(data) {};
	ComponentData get() { return attribute; }

private:
	static int component_count;
	ComponentData attribute;
};

class RenderComponent : public Component
{
public:
	RenderComponent(const char * model_path,const char * vertex_shader_path,const char * fragment_shader_path);

private:
	Model model;
	Shader shader;
};