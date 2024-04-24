//#include<iostream>
//using namespace std;
//
////静态成员函数
//
//class Person
//{
//public:
//	static void func()
//	{
//		m_A = 100;//给静态成员变量赋值,能成功
//		//m_B = 200; //静态成员函数不可访问非静态成员变量
//		cout << "static void func 的调用" << endl;
//	}
//	static int m_A; //创建静态成员变量
//	int m_B; //创建非静态成员变量
//
//	//静态成员函数也有访问权限
//private:
//	static void func2()
//	{
//		cout << "static void func2 函数的调用" << endl;
//	}
//
//};
////初始化静态成员变量
//int Person::m_A;
//
//
////访问静态成员函数
//void test01()
//{
//	//1.通过对象访问
//	Person p;
//	p.func();
//
//	//私有权限访问,不可访问
//	Person p1;
//	//p.func2(); //类外不可访问私有权限
//
//
//	//2.通过类名来访问
//	Person::func();
//
//	//Person::func2();  //在类外,私有权限,不可访问
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}