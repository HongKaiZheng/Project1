//#include<iostream>
//using namespace std;
//
////�������������
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger& myint);
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//ǰ�õ������������,��ǰ�õ��������������,Ҫ��������
//	MyInteger& operator++()
//	{
//		//���е�������
//		m_Num++;
//		//���ص�ǰ��ֵ
//		return *this;
//	}
//	//���õ��������������,���ܷ�������,Ҫ����ֵ,�������β�Ҫʹ��intռλ����,������ǰ�õ���
//	MyInteger operator++(int)
//	{
//		//Ҫ�ȼ�¼��ǰ��ֵ
//		MyInteger temp = *this;
//
//		//Ȼ����е�������
//		m_Num++;
//
//		//��󷵻ص���ǰ�Ľ�� (��Ϊ�Ǻ��õ�������,����Ҫ�ѵ���ǰ�Ľ������ȥ,��Ϊ���õ�������ִ��
//		// ���ʽ,����е���)
//		return temp;  //��Ϊ���ص���temp�ֲ�����,������ǰ����������Ͳ���������,�����ǷǷ�����
//
//	}
//private:
//	int m_Num;
//};
//
////�������������
//ostream& operator<<(ostream& cout, MyInteger &myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << "ǰ�õ��������������:" << ++(++myint) << endl;
//	cout <<"ǰ�õ��������������:"<< myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//	myint++;
//	cout << "���õ��������������:" << myint << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}