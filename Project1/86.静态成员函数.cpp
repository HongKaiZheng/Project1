//#include<iostream>
//using namespace std;
//
////��̬��Ա����
//
//class Person
//{
//public:
//	static void func()
//	{
//		m_A = 100;//����̬��Ա������ֵ,�ܳɹ�
//		//m_B = 200; //��̬��Ա�������ɷ��ʷǾ�̬��Ա����
//		cout << "static void func �ĵ���" << endl;
//	}
//	static int m_A; //������̬��Ա����
//	int m_B; //�����Ǿ�̬��Ա����
//
//	//��̬��Ա����Ҳ�з���Ȩ��
//private:
//	static void func2()
//	{
//		cout << "static void func2 �����ĵ���" << endl;
//	}
//
//};
////��ʼ����̬��Ա����
//int Person::m_A;
//
//
////���ʾ�̬��Ա����
//void test01()
//{
//	//1.ͨ���������
//	Person p;
//	p.func();
//
//	//˽��Ȩ�޷���,���ɷ���
//	Person p1;
//	//p.func2(); //���ⲻ�ɷ���˽��Ȩ��
//
//
//	//2.ͨ������������
//	Person::func();
//
//	//Person::func2();  //������,˽��Ȩ��,���ɷ���
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}