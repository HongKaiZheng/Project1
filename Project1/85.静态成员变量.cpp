//#include<iostream>
//using namespace std;
//
//class Person
//{
//	//静态成员变量,三大特点
//	//1,所有对象共享一份数据
//	//2.在编译阶段就分配内存空间
//	//3.在类内声明,类外初始化
//public:
//	static int m_A;
//	
//	//静态成员也有访问权限
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
//void test01()
//{
//	Person p1;
//	cout << p1.m_A << endl;
//
//	//在这里演示共享一份数据,当p2调用了m_A修改了它的数据的时候,
//	// 即使是用p1访问,也是会访问到p2修改后的结果
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p1.m_A << endl;
//}
//void test02()
//{
//	//静态成员变量 不属于某个对象上,所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//
//	//1.通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//
//	//2.通过类名进行访问
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl; //访问错误,因为m_B为私有权限
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}