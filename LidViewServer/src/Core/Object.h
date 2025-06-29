#pragma once

#include<vector>
#include"Component.h"

class Object
{
public:
	//�������ڳ�Ա����
	virtual void onCreate();
	virtual void onEnable();
	virtual void onDisable();
	virtual void onActive();
	virtual void onDeactive();
	virtual void onDestroy();

	//�������
	void RegisterComponent(Component& component);
private:
	std::vector<Component*> components;
};

class Player :public Object
{
public:
	
};