#include"Object.h"

void Object::RegisterComponent(Component& component)
{
	components.push_back(&component);
}

virtual void Object::onCreate()
{
	for (auto& component : components)
	{
		component->onCreate();
	}
}

virtual void Object::onEnable()
{
	for (auto& component : components)
	{
		component->onEnable();
	}
}

virtual void Object::onDisable()
{
	for (auto& component : components)
	{
		component->onDisable();
	}
}

virtual void Object::onActive()
{
	for (auto& component : components)
	{
		component->onActive();
	}
}

virtual void Object::onDeactive()
{
	for (auto& component : components)
	{
		component->onDeactive();
	}
}

virtual void Object::onDestroy()
{
	for (auto& component : components)
	{
		component->onDestroy();
	}
	components.clear();
}