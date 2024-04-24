//#include<iostream>
//using namespace std;
//
////重载关系运算符
//
//class Person
//{
//public:
//	//创建有参构造函数,初始化属性
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	//重载关系运算符
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//			return true;
//		}
//		else {
//			return false;
//		}
//
//	}
//	string m_Name;
//	int m_Age;
//};
//
//
//void test01()
//{
//	Person p1("hkz",20);
//	Person p2("hkz",20);
//	if (p1 == p2)
//	{
//		cout << "p1和p2是同一个人" << endl;
//	}
//	else {
//		cout << "p1和p2不是同一个人" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}