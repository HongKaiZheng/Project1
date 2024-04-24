//#include<iostream>
//using namespace std;
//
////1,值传递
//void swap(int a,int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
////2,地址传递
//void swap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3,引用传递实现两数交换,使用引用作为函数的形参
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
//	cout << "a原本的值是:" << a << endl;
//	cout << "b原本的值是:" << b << endl;
//
//	//值传递
//	swap(a, b);
//	cout << "在swap中a的值是:" << a << endl;
//	cout << "在swap中b的值是:" << b << endl;
//
//	//地址传递
//	//swap02(&a, &b);
//	//cout << "在swap02中a的值是:" << a << endl;
//	//cout << "在swap02中b的值是:" << b << endl;
//
//	//引用做函数参数
//	swap03(a,b);
//	cout << "在swap03中a的值是:" << a << endl;
//	cout << "在swap03中b的值是:" << b << endl;
//	system("pause");
//	return 0;
//}