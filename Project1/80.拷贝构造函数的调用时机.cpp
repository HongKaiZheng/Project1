//#include<iostream>
//using namespace std;
//
//
////拷贝构造函数的调用时机有三种情况
//class Person
//{
//public:
//	Person()
//	{
//		cout << "默认构造函数的调用" << endl;
//	}
//	Person(int age)
//	{
//		cout << "有参构造函数的调用" << endl;
//		m_age = age;
//	}
//	int m_age;
//	Person(const Person& p)
//	{
//		cout << "拷贝构造函数的调用" << endl;
//		m_age = p.m_age;
//	}
//	~Person()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//
//};
//
////1,使用一个创建好的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄:" << p2.m_age << endl;
//}
////2.值传递的方式给函数参数传值
//void doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//	
//}
////3.值方式返回局部对象
//Person doWork02()
//{
//	Person p4;
//	cout << (int*)&p4 << endl;
//	return Person(p4);
//}
//void test03()
//{
//	Person p5 = doWork02();
//	cout << (int*)&p5 << endl;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}