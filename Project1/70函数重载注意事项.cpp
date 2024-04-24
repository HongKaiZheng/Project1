//#include<iostream>
//using namespace std;
//
////引用作为重载条件
//void func(int& a)
//{
//	cout << "func(int& a)的调用" << endl;
//}
//void func(const int& a)
//{
//	cout << "func(const int& a)的调用" << endl;
//}
//
//
////函数重载遇到默认参数
//void func2(int a)
//{
//	cout << "func2(int a)的调用" << endl;
//}
//void func2(int a,int b=10)
//{
//	cout << "func2(int a)的调用" << endl;
//}
//
//int main()
//{
//	//当传进去的是变量的时候,那么将自动调用不是常量引用的那一个
//	int a = 10;
//	func(a);
//	//当直接把值传进去的时候,会调用常量引用
//	func(10);
//
//	//函数重载遇见函数默认参数
//	//func2(10);//这时候不能运行,因为函数调用的时候会出现歧义,调用第一个func2可以成功,调用第二个func2也可以成功
//	func2(10, 10);//可以利用传递两个实参给函数,用来消除歧义,便能运行成功
//	system("pause");
//	return 0;
//}