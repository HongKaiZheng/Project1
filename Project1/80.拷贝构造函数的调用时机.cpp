//#include<iostream>
//using namespace std;
//
//
////�������캯���ĵ���ʱ�����������
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
//	}
//	Person(int age)
//	{
//		cout << "�вι��캯���ĵ���" << endl;
//		m_age = age;
//	}
//	int m_age;
//	Person(const Person& p)
//	{
//		cout << "�������캯���ĵ���" << endl;
//		m_age = p.m_age;
//	}
//	~Person()
//	{
//		cout << "���������ĵ���" << endl;
//	}
//
//};
//
////1,ʹ��һ�������õĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2������:" << p2.m_age << endl;
//}
////2.ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	doWork(p);
//	
//}
////3.ֵ��ʽ���ؾֲ�����
//Person doWork02()
//{
//	Person p4;
//	cout << (int*)&p4 << endl;
//	return Person(p4);
//}
//void test03()
//{
//	Person p5 = doWork02();
//	cout << (int*)&p5 << endl;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}