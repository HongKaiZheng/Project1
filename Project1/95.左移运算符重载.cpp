//#include<iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<< (ostream& cout, Person& p);
//	friend void test01();
//private:
//	//���ó�Ա�������� ��������� p.operator<<(cout) �򻯰汾 p<< cout
//	//�������ó�Ա��������<<�����,��Ϊ�޷�ʵ�� cout�����
//	//void operator<<( cout )
//	//{
//
//	//}
//	int m_A;
//	int m_B;
//};
//
////ֻ������ȫ�ֺ������������������
//ostream & operator<< (ostream &cout, Person &p)
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return cout;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	cout << p1 << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}