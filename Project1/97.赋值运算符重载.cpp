//#include<iostream>
//using namespace std;
//
////��ֵ���������
//
//class Person
//{
//public:
//	//�вι��캯��
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	int *m_Age;
//	//��������
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//���ظ�ֵ�����
//	Person& operator=(Person& p)
//	{
//		//���ж��Ƿ��������ڶ���,�����,���ͷŸɾ�;
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		//���ض�������
//		return *this;
//	}
//
//};
//
//void test01()
//{
//	//������Ķ���
//	Person p1(18);
//	Person p2(20);
//	//����p3,������ʽ���
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << "p1��������:" << *p1.m_Age << endl;
//	cout << "p2��������:" << *p2.m_Age << endl;
//	cout << "p3��������:" << *p3.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}