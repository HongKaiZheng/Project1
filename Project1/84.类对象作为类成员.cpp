//#include<iostream>
//using namespace std;
//
////类对象作为类成员
//
//class Phone
//{
//public:
//	Phone(string Pname) {
//		cout << "Phone 的构造函数调用" << endl;
//		m_Pname = Pname;
//	}
//	string m_Pname;
//	~Phone() {
//		cout << "Phone 的析构函数调用" << endl;
//	}
//};
//
//class Person
//{
//public:
//	Person(string name, string Pname) :m_Name(name), m_Phone(Pname) {
//		cout << "Penson 的构造函数调用" << endl;
//	}
//
//	string m_Name;
//
//	Phone m_Phone;
//	~Person()
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//};
//
////当其他类对象作为类成员的时候,构造的时候先构造类对象,再构造类本身;
//
//
//void test01()
//{
//	Person p("洪开政", "iPhone 13 Pro");
//	cout << "姓名: " << p.m_Name << " 手机: " << p.m_Phone.m_Pname << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}