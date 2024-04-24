//#include<iostream>
//using namespace std;
//
////创建全局变量
//int g_a = 10;
//int g_b = 10;
//
////创建const修饰的全局变量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main()
//{
//	//创建局部变量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量a的地址是: " << (int)&a  << endl;
//	cout << "局部变量b的地址是: " << (int)&b  << endl;
//
//	//查看全局变量地址
//	cout << "全局变量g_a的地址是: " << (int)&g_a << endl;
//	cout << "全局变量g_b的地址是: " << (int)&g_b << endl;
//
//	//设置静态变量,在普通变量前面加static就变为静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量s_a的地址是:" << (int)&s_a << endl;
//	cout << "静态变量s_b的地址是:" << (int)&s_b << endl;
//
//	//常量,常量有字符串常量,const修饰的局部变量,const修饰的全局变量
//
//	//字符串常量
//	cout << "字符串常量的地址是: " << (int) & "hello word" << endl;
//	//const修饰的全局变量
//	cout << "const修饰的全局变量c_g_a的地址是: " << (int)&c_g_a << endl;
//	cout << "const修饰的全局变量c_g_b的地址是: " << (int)&c_g_b << endl;
//
//	//const修饰的局部变量
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "const修饰的局部变量c_l_a的地址是 " << (int)&c_l_a << endl;
//	cout << "const修饰的局部变量c_l_b的地址是 " << (int)&c_l_b << endl;
//	system("pause");
//	return 0;
//}