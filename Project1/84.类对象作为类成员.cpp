//#include<iostream>
//using namespace std;
//
////�������Ϊ���Ա
//
//class Phone
//{
//public:
//	Phone(string Pname) {
//		cout << "Phone �Ĺ��캯������" << endl;
//		m_Pname = Pname;
//	}
//	string m_Pname;
//	~Phone() {
//		cout << "Phone ��������������" << endl;
//	}
//};
//
//class Person
//{
//public:
//	Person(string name, string Pname) :m_Name(name), m_Phone(Pname) {
//		cout << "Penson �Ĺ��캯������" << endl;
//	}
//
//	string m_Name;
//
//	Phone m_Phone;
//	~Person()
//	{
//		cout << "Person ���������ĵ���" << endl;
//	}
//};
//
////�������������Ϊ���Ա��ʱ��,�����ʱ���ȹ��������,�ٹ����౾��;
//
//
//void test01()
//{
//	Person p("�鿪��", "iPhone 13 Pro");
//	cout << "����: " << p.m_Name << " �ֻ�: " << p.m_Phone.m_Pname << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}