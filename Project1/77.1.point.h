#pragma once
#include<iostream>
using namespace std;


class Point
{
	//ÿ�δ�����˽�����Զ�Ҫȥ�����нӿ�ȥ������
public:
	//����X����
	void setX(int x);

	//��ȡX����
	int getX();

	//����Y����
	void setY(int y);

	//��ȡY����
	int getY();


	//���õ���е�����,��X���Y��
private:
	//����X����
	int m_X;
	//����Y����
	int m_Y;
};