#pragma once

class Object
{
public:
	//生命周期成员函数
	virtual void onCreate(){}
	virtual void onEnable(){}
	virtual void onDisable(){}
	virtual void onActive(){}
	virtual void onDeactive(){}
	virtual void onDestroy(){}
};

class Player
{
public:

private:

};