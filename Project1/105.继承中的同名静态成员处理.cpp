//#include<iostream>
//using namespace std;
//
////继承中的同名静态成员处理
////静态成员,类内声明,类外赋值
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
//	//通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s1;
//	cout << "Son下的 m_A = " << s1.m_A << endl;
//	cout << "Base下的 m_A = " << s1.Base::m_A << endl;
//
//	//通过类名访问
//	cout << "通过类名访问" << endl;
//	cout << "Son下的 m_A = " << Son::m_A << endl;
//	cout << "Base下的 m_A = " << Son::Base::m_A << endl;
//}
//
//void test02()
//{
//	//使用对象进行访问
//	cout << "使用对象进行访问" << endl;
//	Son s2;
//	s2.func();
//	s2.Base::func();
//
//	cout << "使用类名进行访问" << endl;
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