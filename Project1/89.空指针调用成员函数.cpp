//#include<iostream>
//using namespace std;
//
////��ָ����ʳ�Ա����
//
//class Person
//{
//public:
//	void showclassname()
//	{
//		cout << " class name is Person" << endl;
//	}
//	void showage()
//	{
//		//����������,���������ǿ�ָ��,��ֱ�ӷ���,��ִ����һ��
//		if (this == NULL) {
//			return;
//		}
//		//�����ﱨ���ԭ������Ϊ�����ָ����NULL
//		cout << "������:" << this->age << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->showclassname();
//
//	p->showage(); //��Ϊһ��ʼ��ʼ��ָ��ΪNULL,����һ����ָ�벻�ܷ��ʵ���Ա�����еı���
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}