//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//	//利用虚析构函数,可以解决父类指针释放子类对象不干净的问题
//	/*virtual ~Animal()
//	{
//		cout << "Animal析构函数调用" << endl;
//	}*/
//
//	//纯虚析构 需要声明也需要实现
//	virtual ~Animal() = 0;
//
//	virtual void speak() = 0;
//
//};
//
////Animal下的纯虚析构函数创建
//Animal::~Animal() {
//	cout << "Animal纯虚析构函数的调用" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	void speak()
//	{
//		cout << *m_Name << "猫猫在轻语" << endl;
//	}
//	//创建析构函数,释放堆区内存空间
//	~Cat()
//	{
//		cout << "Cat析构函数调用" << endl;
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	//给猫猫定义名字
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//
//	//父类指针在析构的时候,不会调用子类中的析构函数,导致如果子类在堆区开辟了内存空间不能
//	//被释放,造成内存泄漏,所以要在父类的析构函数前面加上virtual,变成虚析构函数
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}