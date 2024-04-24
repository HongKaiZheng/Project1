//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base - func()的调用" << endl;
//	}
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son - func()调用" << endl;
//	}
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//	cout << "Son 下的 m_A = " << s.m_A << endl;
//	//如果通过子类对象,访问到父类的同名成员,需要加作用域
//	cout << "Base 下的 m_A = " << s.Base::m_A << endl;
//}
//
//void test02()
//{
//	Son s1;
//	s1.func(); //直接调用,调用的是子类的同名函数
//	//如果通过子类对象,访问到父类的同名函数,需要加作用域
//	s1.Base::func();//加上父类作用域,即可调用父类的同名函数
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}