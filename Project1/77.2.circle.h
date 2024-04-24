#pragma once
#include<iostream>
#include "77.1.point.h"
using namespace std;

//建立一个圆类
class m_round
{
	//设置公有接口去调用类属性
public:
	//设置圆半径
	void setR(int r);

	//获取圆半径
	int getR();

	//设置圆心
	void setCenter(Point center);

	//获取圆心
	Point getCenter();


	//设置圆的属性,有半径和圆心,属性一般设置为私有的
private:
	//设置半径
	int m_R;

	//设置圆心,圆心有X轴坐标和Y轴坐标,所以要引用外部类
	Point m_Center;
};

