//#include<iostream>
//using namespace std;
//
////���ع�ϵ�����
//
//class Person
//{
//public:
//	//�����вι��캯��,��ʼ������
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	//���ع�ϵ�����
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
//		cout << "p1��p2��ͬһ����" << endl;
//	}
//	else {
//		cout << "p1��p2����ͬһ����" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}