//#include<iostream>
//using namespace std;
//
////多继承语法
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_B = 200;
//	}
//	int m_B;
//};
//
//class Son : public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s;
//	cout << "查看子类大小" << endl;
//	cout << "sizeof(Son) = " << sizeof(s) << endl;
//	cout << "m_A = " << s.Base1::m_A << endl;
//	cout << "m_B = " << s.Base2::m_B << endl;
//	cout << "m_C = " << s.m_C << endl;
//	cout << "m_D = " << s.m_D << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}