//#include<iostream>
//using namespace std;
//
////引用做函数的返回值
////不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
////函数的调用可以作为左值
//int& test02()
//{
//	static int a = 10; //静态局部变量,会保留到系统程序执行结束后才会释放,所以可以被作为引用返回出去
//	return a;
//}
//
//int main()
//{
//	int& ref = test01();
//	cout << "ref=" << ref << endl; //返回结果错误,因为引用作为局部变量的返回值时候,运行之后会被系统释放内存
//	
//	int& ref02 = test02();
//	cout << "ref02=" << ref02 << endl;
//	cout << "ref02=" << ref02 << endl;
//	test02() = 1000;//因为函数test02返回的是a的引用,相当于重新给a赋值,后面的ref02会变为1000
//	cout << "加了test02() = 1000后,ref02=" << ref02 << endl;
//	cout << "加了test02() = 1000后,ref02=" << ref02 << endl;
//	system("pause");
//	return 0;
//}