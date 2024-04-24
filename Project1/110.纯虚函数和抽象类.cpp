//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	//创建纯虚函数
//	//只要有一个纯虚函数,这个类称为抽象类
//	//抽象类的特点:
//	//1.无法实例化对象
//	//2.抽象类的子类必须重写父类中的纯虚函数,否则也属于抽象类
//	virtual void func() = 0;
//};
//
//class Son : public Base
//{
//public:
//	void func()
//	{
//		cout << "func()调用" << endl;
//	}
//};
//
//void test01()
//{
//	//Base base; //抽象类是无法实例化对象
//	//Son s; //子类必须重写父类的纯虚函数,否则无法实例化对象
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