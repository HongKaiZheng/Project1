//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//引用注意事项
//	int a = 10;
//	//引用必须初始化,不能int  &b;就结束了
//	int &b = a;
//	int c = 20;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//	//引用不可改变
//	//int& b = c;//引用不可改变,会报错
//	b = c;//这里是赋值操作,是正确的
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//	system("pause");
//	return 0;
//}