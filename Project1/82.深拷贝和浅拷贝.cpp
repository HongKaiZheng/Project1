//#include<iostream>
//using namespace std;
//
////ǳ������ϵͳ�򵥵ĸ�ֵ��������
////������ڶ����п���һ���ڴ�ռ�,���п�������
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "�вι��캯������" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "�������캯���ĵ���" << endl;
//		m_age = p.m_age;
//		// m_height = p.m_height; //�����ϵͳĬ�����ɵĿ�������
//		m_height = new int(*p.m_height);
//
//	}
//	~Person()
//	{
//		//��������,���������������ͷ�
//		if (m_height != NULL) {
//			delete m_height;//�ͷŶ�����m_height����
//			m_height = NULL;//��ʼ��
//		}
//		cout << "������������" << endl;
//	}
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	//ǳ����
//	Person p1(20,160);
//	cout << "p1��������:" << p1.m_age << ", �����:" << *p1.m_height << endl;
//	Person p2(p1);
//	cout << "p2��������:" << p2.m_age << ", �����:" << *p2.m_height << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}