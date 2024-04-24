#pragma once
#include<iostream>
using namespace std;


class Point
{
	//每次创建好私有属性都要去给公有接口去调用它
public:
	//设置X坐标
	void setX(int x);

	//获取X坐标
	int getX();

	//设置Y坐标
	void setY(int y);

	//获取Y坐标
	int getY();


	//设置点具有的属性,有X轴和Y轴
private:
	//设置X坐标
	int m_X;
	//设置Y坐标
	int m_Y;
};