#pragma once

#include<vector>
#include"Component.h"

#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>

class Object
{
public:
	//�������ڳ�Ա����
	virtual void onCreate();
	virtual void onEnable();
	virtual void onDisable();
	virtual void onDestroy();

	//�������
	void RegisterComponent(Component& component);

	//����
	void update();
private:
	std::vector<Component*> components;
	static long count;
	long id;
};

class Player :public Object
{
public:
	void onCreate(glm::vec3 pos, RenderComponent PlayerRenderer);
	void update();

private:
	glm::vec3 pos;
};