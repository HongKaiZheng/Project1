//#include<iostream>
//using namespace std;
//
////������Ϊ��������
//void func(int& a)
//{
//	cout << "func(int& a)�ĵ���" << endl;
//}
//void func(const int& a)
//{
//	cout << "func(const int& a)�ĵ���" << endl;
//}
//
//
////������������Ĭ�ϲ���
//void func2(int a)
//{
//	cout << "func2(int a)�ĵ���" << endl;
//}
//void func2(int a,int b=10)
//{
//	cout << "func2(int a)�ĵ���" << endl;
//}
//
//int main()
//{
//	//������ȥ���Ǳ�����ʱ��,��ô���Զ����ò��ǳ������õ���һ��
//	int a = 10;
//	func(a);
//	//��ֱ�Ӱ�ֵ����ȥ��ʱ��,����ó�������
//	func(10);
//
//	//����������������Ĭ�ϲ���
//	//func2(10);//��ʱ��������,��Ϊ�������õ�ʱ����������,���õ�һ��func2���Գɹ�,���õڶ���func2Ҳ���Գɹ�
//	func2(10, 10);//�������ô�������ʵ�θ�����,������������,�������гɹ�
//	system("pause");
//	return 0;
//}