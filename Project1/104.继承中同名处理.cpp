//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base - func()�ĵ���" << endl;
//	}
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son - func()����" << endl;
//	}
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//	cout << "Son �µ� m_A = " << s.m_A << endl;
//	//���ͨ���������,���ʵ������ͬ����Ա,��Ҫ��������
//	cout << "Base �µ� m_A = " << s.Base::m_A << endl;
//}
//
//void test02()
//{
//	Son s1;
//	s1.func(); //ֱ�ӵ���,���õ��������ͬ������
//	//���ͨ���������,���ʵ������ͬ������,��Ҫ��������
//	s1.Base::func();//���ϸ���������,���ɵ��ø����ͬ������
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}