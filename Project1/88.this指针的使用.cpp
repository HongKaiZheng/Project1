//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//ʹ��this����βκͱ���������ͬ
//	Person(int age)
//	{
//		this->age = age;
//	}
//	int age;
//
//	Person& PersonAddage(Person& p)
//	{
//		this->age += p.age;
//
//		//thisָ�����p2��ָ��,��*this����ָ��p2�������ı���
//		return *this;
//	}
//
//};
//
//void test01()
//{
//	
//	Person p(20);
//	cout << "p��������: " << p.age << endl;
//}
//
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//��ʽ���˼��
//	p2.PersonAddage(p1).PersonAddage(p1).PersonAddage(p1);
//	cout << "p2��������:" << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}