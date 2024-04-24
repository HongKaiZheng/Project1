//#include<iostream>
//using namespace std;
//
////多态
////创建动物类
//class Animal
//{
//public:
//	//父类成员函数变为虚函数
//	virtual void speak()
//	{
//		cout << "动物在狗叫" << endl;
//	}
//};
//
////创建猫类
//class Cat : public Animal{
//public:
//	void speak()
//	{
//		cout << "猫在狗叫" << endl;
//	}
//};
//
////创建狗类
//class Dog : public Animal {
//public:
//	void speak()
//	{
//		cout << "小狗在叫" << endl;
//	}
//};
//
////说话执行函数
////地址早绑定,在编译阶段确定函数地址
////要让函数调用子类的函数成员,需要地址晚绑定,在程序运行时才进行绑定,在父类的函数成员上加上virtual
//
///**动态多态满足条件:**
//
//1. 有继承关系
//2. 子类重写父类的的虚函数
//
//
//
//* *动态多态的使用 * *
//
//父类的指针或引用, 指向子类对象*/
//void doSpeak(Animal& animal) {
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "sizeof(Animal) = " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}