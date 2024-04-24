//#include<iostream>
//using namespace std;
//
////浅拷贝是系统简单的赋值拷贝操作
////深拷贝是在堆区中开辟一个内存空间,进行拷贝操作
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "默认构造函数调用" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "有参构造函数调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "拷贝构造函数的调用" << endl;
//		m_age = p.m_age;
//		// m_height = p.m_height; //这个是系统默认生成的拷贝操作
//		m_height = new int(*p.m_height);
//
//	}
//	~Person()
//	{
//		//析构代码,将堆区开辟数据释放
//		if (m_height != NULL) {
//			delete m_height;//释放堆区的m_height数据
//			m_height = NULL;//初始化
//		}
//		cout << "析构函数调用" << endl;
//	}
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	//浅拷贝
//	Person p1(20,160);
//	cout << "p1的年龄是:" << p1.m_age << ", 身高是:" << *p1.m_height << endl;
//	Person p2(p1);
//	cout << "p2的年龄是:" << p2.m_age << ", 身高是:" << *p2.m_height << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}