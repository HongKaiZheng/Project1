//#include<iostream>
//using namespace std;
//
////�̳��е�ͬ����̬��Ա����
////��̬��Ա,��������,���⸳ֵ
//
//
//class Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Base -- static void func()" << endl;
//	}
//};
//
//int Base::m_A = 100;
//
//class Son : public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son -- static void func()" << endl;
//	}
//};
//
//int Son::m_A = 200;
//
//void test01()
//{
//	//ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s1;
//	cout << "Son�µ� m_A = " << s1.m_A << endl;
//	cout << "Base�µ� m_A = " << s1.Base::m_A << endl;
//
//	//ͨ����������
//	cout << "ͨ����������" << endl;
//	cout << "Son�µ� m_A = " << Son::m_A << endl;
//	cout << "Base�µ� m_A = " << Son::Base::m_A << endl;
//}
//
//void test02()
//{
//	//ʹ�ö�����з���
//	cout << "ʹ�ö�����з���" << endl;
//	Son s2;
//	s2.func();
//	s2.Base::func();
//
//	cout << "ʹ���������з���" << endl;
//	Son::func();
//	Son::Base::func();
//
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}