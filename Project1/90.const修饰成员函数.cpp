//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//this ָ��ı�����ָ�볣��,ָ���ָ���ǲ������޸ĵ�
//	//�� void showPerson()�����const  �൱�ڰ�this��Ϊ������ָ�������γ���:  const Person * const this
//	//������ָ��ָ���ֵҲ�������޸�
//	void showPerson() const
//	{
//		m_B = 100;
//		//m_A = 100;
//		//this = NULL;
//	}
//	void tset002()
//	{
//		cout << "test02����,��������ò����������,��ֻ�ܵ��ó�����" << endl;
//	}
//	int m_A;
//	//������������ʱ����ǰ���mutable,��Ϊ�������,�����ڳ��������޸�����ֵ
//	mutable int m_B;
//
//	static int m_C;
//	Person()
//	{
//
//	}
//};
//int Person::m_C;
//
//void test01()
//{
//	Person p;
//	//p.showPerson(); 
//	
//}
//
//
////������
//void test02()
//{
//	const Person p;
//	//p.m_A = 100;
//	p.m_B = 100; //m_B������ֵ,�ڳ�������Ҳ���޸�ֵ
//	p.m_C = 200; //����������޸ľ�̬������ֵ
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//
//	//p.test002();  //������,�����Ե�����ͨ��Ա����,��Ϊ��ͨ���������޸�����
//}
//
//int main()
//{
//	system("pause");
//	return 0;
//}