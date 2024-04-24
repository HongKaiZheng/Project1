//#include<iostream>
//using namespace std;
//
//int* func()
//{
//	//使用new关键字,在堆区开辟空间
//	//指针本质也是保存在栈区的数据,但是指针指向的数据是保存在堆区的
//	int *p = new int(10);
//	return p;
//}
//int main()
//{
//	//在堆区开辟数据,使用new关键字
//	int* p = func();
//	cout << *p << endl;//在堆区创建的变量不管第几次都可以访问的到,不会被系统释放
//	cout << *p << endl;
//	system("pause");
//	return 0;
//}