//#include<iostream>
//using namespace std;
//
////赋值运算符重载
//
//class Person
//{
//public:
//	//有参构造函数
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	int *m_Age;
//	//析构函数
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//重载赋值运算符
//	Person& operator=(Person& p)
//	{
//		//先判断是否有属性在堆区,如果有,先释放干净;
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		//返回对象自身
//		return *this;
//	}
//
//};
//
//void test01()
//{
//	//创建类的对象
//	Person p1(18);
//	Person p2(20);
//	//新增p3,进行链式编程
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << "p1的年龄是:" << *p1.m_Age << endl;
//	cout << "p2的年龄是:" << *p2.m_Age << endl;
//	cout << "p3的年龄是:" << *p3.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}