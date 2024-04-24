//#include<iostream>
//using namespace std;
//
////创建局部变量并返回变量的地址
//int* func()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//栈区注意事项:,不要返回局部变量的地址,栈区开辟的数据由编译器自动释放
//
//	int* p = func();
//	cout << *p << endl;//第一次会调用成功,在x64系统下,如果栈区空间充足,会一直保留,
//	cout << *p << endl;//但是在x86系统下,第二次将是读取不到的,因为已经被系统释放
//
//	system("pause");
//	return 0;
//}