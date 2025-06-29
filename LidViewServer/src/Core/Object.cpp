#include"Object.h"

void Object::RegisterComponent(Component& component)
{
	components.push_back(&component);
}

void Object::onCreate()
{
	for (auto& component : components)
	{
		component->onCreate();
	}

	count++;
	id = count;
}

void Object::onEnable()
{
	for (auto& component : components)
	{
		component->onEnable();
	}
}

void Object::onDisable()
{
	for (auto& component : components)
	{
		component->onDisable();
	}
}

void Object::onDestroy()
{
	for (auto& component : components)
	{
		component->onDestroy();
	}
	components.clear();
	count--;
}

void Object::update()
{
	for (auto& component : components)
	{
		//更新组件
		component->onEnable();
		component->onDisable();
	}
}

void Player::onCreate(glm::vec3 pos, RenderComponent PlayerRenderer)
{
	this->pos = pos;
	RegisterComponent(PlayerRenderer);
}

void Player::update()
{

}