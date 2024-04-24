//#include<iostream>
//using namespace std;
//
////函数重载
////函数重载条件:
////1,在同一作用域下
////2,函数名相同
////3,形参类型不一样,形参个数不一样,形参顺序不一样
//
//void func()
//{
//	cout << "func的调用" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//}
//void func(double a)
//{
//	cout << "func(double a)的调用" << endl;
//}
//void func(double a,int)
//{
//	cout << "func(double a,int)的调用" << endl;
//}
//void func(int,double a)
//{
//	cout << "func(int,double a)的调用" << endl;
//}
//int main()
//{
//	func();
//	func(10);
//	func(10.0);
//	func(10.0,1);
//	func(1,10.0);
//	system("pause");
//	return 0;
//}