//#include<iostream>
//using namespace std;
//
////������������
//class Cube
//{
//public:
//	//������Ϊ,��ȡ��������ĳ����
//	void setCubeL(int setL)
//	{
//		m_L = setL;
//	}
//	int getCubeL(int getL)
//	{
//		return m_L;
//	}
//	void setCubeW(int setW)
//	{
//		m_W = setW;
//	}
//	int getCubeW(int getE)
//	{
//		return m_W;
//	}
//	void setCubeH(int setH)
//	{
//		m_H = setH;
//	}
//	int getCubeH(int getH)
//	{
//		return m_H;
//	}
//
//	//������������
//	int Scube()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	//������������
//	int Vcube()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//���ó�Ա�����ж������������Ƿ����
//	bool isSameByClass(Cube& c)
//	{
//		if (Scube() == c.Scube() && Vcube() == c.Vcube()) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//
//
//
//	//���ó����Ϊ˽�е�
//private:
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
//};
////����ȫ�ֺ����ж������������Ƿ����
//bool isSame(Cube& C1, Cube& C2)
//{
//	if (C1.Scube() == C2.Scube() && C1.Vcube() == C2.Vcube()) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main()
//{
//	//����ʵ��������
//	Cube C1;
//	//��ֵ
//	C1.setCubeL(10);
//	C1.setCubeW(10);
//	C1.setCubeH(10);
//	cout << "������������:" << C1.Scube() << endl;
//	cout << "������������:" << C1.Vcube() << endl;
//
//	Cube C2;
//	C2.setCubeL(10);
//	C2.setCubeW(10);
//	C2.setCubeH(10);
//	//����ȫ�ֺ����ж������������Ƿ����
//	bool ret = isSame(C1, C2);
//	if (ret) {
//		cout << "C1��C2����ȵ�" << endl;
//	}
//	else {
//		cout << "C1��C2�ǲ���ȵ�" << endl;
//	}
//
//	//���ó�Ա�����ж������������Ƿ����
//	bool ref = C1.isSameByClass(C2);
//	if (ref) {
//		cout << "��Ա�����ж�:C1��C2����ȵ�" << endl;
//	}
//	else {
//		cout << "��Ա�����ж�:C1��C2�ǲ���ȵ�" << endl;
//	}
//	system("pause");
//	return 0;
//}