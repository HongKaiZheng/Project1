//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	//�������麯��
//	//ֻҪ��һ�����麯��,������Ϊ������
//	//��������ص�:
//	//1.�޷�ʵ��������
//	//2.����������������д�����еĴ��麯��,����Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//
//class Son : public Base
//{
//public:
//	void func()
//	{
//		cout << "func()����" << endl;
//	}
//};
//
//void test01()
//{
//	//Base base; //���������޷�ʵ��������
//	//Son s; //���������д����Ĵ��麯��,�����޷�ʵ��������
//
//	Base* base = new Son; 
//	base->func();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}