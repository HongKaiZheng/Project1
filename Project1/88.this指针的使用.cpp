//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//使用this解决形参和变量名称相同
//	Person(int age)
//	{
//		this->age = age;
//	}
//	int age;
//
//	Person& PersonAddage(Person& p)
//	{
//		this->age += p.age;
//
//		//this指向的是p2的指针,而*this就是指向p2这个对象的本体
//		return *this;
//	}
//
//};
//
//void test01()
//{
//	
//	Person p(20);
//	cout << "p的年龄是: " << p.age << endl;
//}
//
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersonAddage(p1).PersonAddage(p1).PersonAddage(p1);
//	cout << "p2的年龄是:" << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}