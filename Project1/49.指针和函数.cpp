//#include<iostream>
//using namespace std;
//
////实现两个数字进行交换
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void swap02(int* p, int* p2)
//{
//	int temp = *p;
//	*p = *p2;
//	*p2 = temp;
//}
//
//int main()
//{
//	//值传递,不会改变实参的值
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << "swap a的值为:" << a << endl;
//	cout << "swap b的值为:" << b << endl;
//
//	//地址传递,可以改变实参的值
//	swap02(&a,&b);
//	cout << "swap02 a的值为:" << a << endl;
//	cout << "swap02 b的值为:" << b << endl;
//	system("pause");
//	return 0;
//}