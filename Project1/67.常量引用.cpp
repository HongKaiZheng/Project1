//#include<iostream>
//using namespace std;
//
////在形参那里使用常量修饰引用,让用户不可以修改形参的值
//void showvalue(const int& a)
//{
//	//a = 1000; 因为在形参中加入了常量修改,使用不可以修改a的值了
//	cout << "a=" << a << endl;
//}
//int main()
//{
//	//常量引用,防止用户误操作
//	int a = 100;
//	cout << "a=" << a << endl;
//	showvalue(a);
//	system("pause");
//	return 0;
//}