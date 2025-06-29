#pragma once

#include<Tools/model.h>
#include<Tools/shader.h>

class Component
{
public:
	//�������ڳ�Ա����
	virtual void onCreate() {}
	virtual void onEnable() {}
	virtual void onDisable() {}
	virtual void onActive() {}
	virtual void onDeactive() {}
	virtual void onDestroy() {}
private:
	int id;
};

class RenderComponent :public Component
{
public:
	void onCreate(Shader* shader, Model* model);
private:
	Shader* shader;
	Model* model;
};