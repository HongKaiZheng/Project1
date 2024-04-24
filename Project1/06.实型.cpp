//#include<iostream>
//using namespace std;
//
//int main()
//{
//	/*实型有两种,也就是浮点型,默认输出六位有效数字
//	1,单精度(float)
//	2,双精度(double)
//	*/
//	//1,定义单精度,一般定义单精度,会在小数结束的后面加f,不然系统默认该小数为双精度
//	float f1 = 3.14f;
//	cout << "单精度f1=" << f1 << endl;
//
//	//2,定义双精度
//	double d1 = 3.14;
//	cout << "双精度d1=" << d1 << endl;
//
//	//统计float和double占用内存空间的大小
//	cout << "float占用内存空间的大小为:" << sizeof(float) << endl;
//	cout << "double占用内存空间的大小为:" << sizeof(double) << endl;
//
//	//科学计数法
//	float f2 = 3e2; //3*10^2
//	cout << "f2=" << f2 << endl;
//
//	float f3 = 3e-2; //3*0.1^2
//	cout << "f3=" << f3 << endl;
//
//	system("pause");
//	return 0;
//}