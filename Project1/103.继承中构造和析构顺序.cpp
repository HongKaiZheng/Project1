//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base中构造函数的调用" << endl;
//	}
//	~Base()
//	{
//		cout << "Base中析构函数的调用" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son中构造函数的调用" << endl;
//	}
//	~Son()
//	{
//		cout << "Son中析构函数的调用" << endl;
//	}
//};
//void test01()
//{
//	//Base b;
//	//继承中的构造函数和析构函数顺序:
//	//先构造父类,再构造子类,先析构子类,再析构父类(先进后出)
//	Son s;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}