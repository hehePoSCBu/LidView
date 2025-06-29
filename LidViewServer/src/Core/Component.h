#pragma once

#include<Tools/model.h>
#include<Tools/shader.h>

class Component
{
public:
	//生命周期成员函数
	virtual void onCreate() { count++; id = count; }
	virtual void onEnable() {}
	virtual void onDisable() {}
	virtual void onDestroy() { count--; }
private:
	static long count;
	long id;
};

class RenderComponent :public Component
{
public:
	void onCreate(const char * vertex_shader_path,const char * fragment_shader_path,const char * model_path);
private:
	Shader* shader;
	Model* model;
};