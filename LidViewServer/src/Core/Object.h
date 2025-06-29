#pragma once

#include<vector>
#include"Component.h"

#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>

class Object
{
public:
	//生命周期成员函数
	virtual void onCreate();
	virtual void onEnable();
	virtual void onDisable();
	virtual void onActive();
	virtual void onDeactive();
	virtual void onDestroy();

	//组件管理
	void RegisterComponent(Component& component);
private:
	std::vector<Component*> components;
};

class Player :public Object
{
public:
	Player(glm::vec3 pos);

private:
	glm::vec3 pos;
};