#include "77.2.circle.h"
using namespace std;

//����һ��Բ��
	//����Բ�뾶
	void m_round::setR(int r)
	{
		m_R = r;
	}
	//��ȡԲ�뾶
	int m_round::getR()
	{
		return m_R;
	}
	//����Բ��
	void m_round::setCenter(Point center)
	{
		m_Center = center;
	}
	//��ȡԲ��
	Point m_round::getCenter()
	{
		return m_Center;
	}
