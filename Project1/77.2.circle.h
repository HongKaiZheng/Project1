#pragma once
#include<iostream>
#include "77.1.point.h"
using namespace std;

//����һ��Բ��
class m_round
{
	//���ù��нӿ�ȥ����������
public:
	//����Բ�뾶
	void setR(int r);

	//��ȡԲ�뾶
	int getR();

	//����Բ��
	void setCenter(Point center);

	//��ȡԲ��
	Point getCenter();


	//����Բ������,�а뾶��Բ��,����һ������Ϊ˽�е�
private:
	//���ð뾶
	int m_R;

	//����Բ��,Բ����X�������Y������,����Ҫ�����ⲿ��
	Point m_Center;
};

