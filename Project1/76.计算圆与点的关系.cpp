//#include<iostream>
//using namespace std;
//#include "77.1.point.h"
//#include "77.2.circle.h"
////�������Բ�Ĺ�ϵ,һ�������ֹ�ϵ,һ������Բ��,һ������Բ��,һ������Բ��
//
////����������
////class Point
////{
////	//ÿ�δ�����˽�����Զ�Ҫȥ�����нӿ�ȥ������
////public:
////	//����X����
////	void setX(int x)
////	{
////		m_X = x;
////	};
////	//��ȡX����
////	int getX()
////	{
////		return m_X;
////	}
////	//����Y����
////	void setY(int y)
////	{
////		m_X = y;
////	};
////	//��ȡY����
////	int getY()
////	{
////		return m_Y;
////	};
////
////	//���õ���е�����,��X���Y��
////private:
////	//����X����
////	int m_X;
////	//����Y����
////	int m_Y;
////};
//
//////����һ��Բ��
////class m_round
////{
////	//���ù��нӿ�ȥ����������
////public:
////	//����Բ�뾶
////	void setR(int r)
////	{
////		m_R = r;
////	}
////	//��ȡԲ�뾶
////	int getR()
////	{
////		return m_R;
////	}
////	//����Բ��
////	void setCenter(Point center)
////	{
////		m_Center = center;
////	}
////	//��ȡԲ��
////	Point getCenter()
////	{
////		return m_Center;
////	}
////
////	//����Բ������,�а뾶��Բ��,����һ������Ϊ˽�е�
////private:
////	//���ð뾶
////	int m_R;
////
////	//����Բ��,Բ����X�������Y������,����Ҫ�����ⲿ��
////	Point m_Center;
////};
//
////������Բ�Ĺ�ϵ�Ƿ����,�β�Ӧ�ð�һ��Բ��һ���㴫��ȥ
//void isCalculate(m_round& c,Point& p)
//{
//	//������������ƽ��
//	int ref = (pow((c.getCenter().getX() - p.getX()), 2) + pow((c.getCenter().getY() - p.getY()), 2));
//	//����뾶��ƽ��
//	int ret = pow(c.getR(), 2);
//	//�ж�����֮�����Ͱ뾶�Ĺ�ϵ
//	if (ref == ret) {
//		cout << "����Բ��" << endl;
//	}
//	else if (ref > ret) {
//		cout << "����Բ��" << endl;
//	}
//	else {
//		cout << "����Բ��" << endl;
//	}
//
//}
//
//
//
//int main()
//{
//	//����Բ
//	m_round c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//	//������
//	Point p;
//	p.setX(10);
//	p.setY(10);
//	isCalculate(c, p);
//	
//	system("pause");
//	return 0;
//}