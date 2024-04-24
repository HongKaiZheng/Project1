//#include<iostream>
//using namespace std;
//#include "77.1.point.h"
//#include "77.2.circle.h"
////计算点与圆的关系,一共有三种关系,一种是在圆上,一种是在圆内,一种是在圆外
//
////建立坐标类
////class Point
////{
////	//每次创建好私有属性都要去给公有接口去调用它
////public:
////	//设置X坐标
////	void setX(int x)
////	{
////		m_X = x;
////	};
////	//获取X坐标
////	int getX()
////	{
////		return m_X;
////	}
////	//设置Y坐标
////	void setY(int y)
////	{
////		m_X = y;
////	};
////	//获取Y坐标
////	int getY()
////	{
////		return m_Y;
////	};
////
////	//设置点具有的属性,有X轴和Y轴
////private:
////	//设置X坐标
////	int m_X;
////	//设置Y坐标
////	int m_Y;
////};
//
//////建立一个圆类
////class m_round
////{
////	//设置公有接口去调用类属性
////public:
////	//设置圆半径
////	void setR(int r)
////	{
////		m_R = r;
////	}
////	//获取圆半径
////	int getR()
////	{
////		return m_R;
////	}
////	//设置圆心
////	void setCenter(Point center)
////	{
////		m_Center = center;
////	}
////	//获取圆心
////	Point getCenter()
////	{
////		return m_Center;
////	}
////
////	//设置圆的属性,有半径和圆心,属性一般设置为私有的
////private:
////	//设置半径
////	int m_R;
////
////	//设置圆心,圆心有X轴坐标和Y轴坐标,所以要引用外部类
////	Point m_Center;
////};
//
////计算点和圆的关系是否相等,形参应该把一个圆和一个点传进去
//void isCalculate(m_round& c,Point& p)
//{
//	//计算两点距离的平方
//	int ref = (pow((c.getCenter().getX() - p.getX()), 2) + pow((c.getCenter().getY() - p.getY()), 2));
//	//计算半径的平方
//	int ret = pow(c.getR(), 2);
//	//判断两点之间距离和半径的关系
//	if (ref == ret) {
//		cout << "点在圆上" << endl;
//	}
//	else if (ref > ret) {
//		cout << "点在圆外" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//	}
//
//}
//
//
//
//int main()
//{
//	//创建圆
//	m_round c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//	//创建点
//	Point p;
//	p.setX(10);
//	p.setY(10);
//	isCalculate(c, p);
//	
//	system("pause");
//	return 0;
//}