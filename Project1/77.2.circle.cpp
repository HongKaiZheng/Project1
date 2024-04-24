#include "77.2.circle.h"
using namespace std;

//建立一个圆类
	//设置圆半径
	void m_round::setR(int r)
	{
		m_R = r;
	}
	//获取圆半径
	int m_round::getR()
	{
		return m_R;
	}
	//设置圆心
	void m_round::setCenter(Point center)
	{
		m_Center = center;
	}
	//获取圆心
	Point m_round::getCenter()
	{
		return m_Center;
	}
