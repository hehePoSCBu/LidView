#include"Object.h"


void Object::add_component(ComponentData data)
{
	components.push_back(new Component(data));
}

int Object::get_id()
{
	return id;
}