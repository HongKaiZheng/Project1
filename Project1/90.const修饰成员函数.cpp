//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//this 指针的本质是指针常量,指针的指向是不可以修改的
//	//在 void showPerson()后面加const  相当于把this变为既修饰指针又修饰常量:  const Person * const this
//	//这样让指针指向的值也不可以修改
//	void showPerson() const
//	{
//		m_B = 100;
//		//m_A = 100;
//		//this = NULL;
//	}
//	void tset002()
//	{
//		cout << "test02测试,常对象调用不到这个函数,它只能调用常函数" << endl;
//	}
//	int m_A;
//	//在声明变量的时候在前面加mutable,变为特殊变量,可以在常函数中修改他的值
//	mutable int m_B;
//
//	static int m_C;
//	Person()
//	{
//
//	}
//};
//int Person::m_C;
//
//void test01()
//{
//	Person p;
//	//p.showPerson(); 
//	
//}
//
//
////常对象
//void test02()
//{
//	const Person p;
//	//p.m_A = 100;
//	p.m_B = 100; //m_B是特殊值,在常对象下也能修改值
//	p.m_C = 200; //常对象可以修改静态变量的值
//
//	//常对象只能调用常函数
//	p.showPerson();
//
//	//p.test002();  //常对象,不可以调用普通成员函数,因为普通函数可以修改属性
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}