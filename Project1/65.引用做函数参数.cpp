//#include<iostream>
//using namespace std;
//
////1,ֵ����
//void swap(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
////2,��ַ����
//void swap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3,���ô���ʵ����������,ʹ��������Ϊ�������β�
//void swap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "aԭ����ֵ��:" << a << endl;
//	cout << "bԭ����ֵ��:" << b << endl;
//
//	//ֵ����
//	swap(a, b);
//	cout << "��swap��a��ֵ��:" << a << endl;
//	cout << "��swap��b��ֵ��:" << b << endl;
//
//	//��ַ����
//	//swap02(&a, &b);
//	//cout << "��swap02��a��ֵ��:" << a << endl;
//	//cout << "��swap02��b��ֵ��:" << b << endl;
//
//	//��������������
//	swap03(a,b);
//	cout << "��swap03��a��ֵ��:" << a << endl;
//	cout << "��swap03��b��ֵ��:" << b << endl;
//	system("pause");
//	return 0;
//}