//#include<iostream>
//using namespace std;
//
//
////使用new操作符在堆区开辟内存空间
//int* func()
//{
//	//new是返回该数据类型的指针
//	int * p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int *p = func();
//	//在堆区的数据不会被释放
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	
//	//手动释放堆区数据,使用delete关键字
//	delete p;
//	cout << *p << endl; //运行到此处的时候程序会报错,因为堆区数据已经手动释放,无法再进行释放
//}
////利用关键字new在堆区开辟数组
//void test02()
//{
//	//在堆区开辟数组
//	int * arr = new int[10];//10代表数组有10个元素
//	//给数组赋值
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;//给数组赋值100~109;
//	}
//	//打印看是否赋值成功
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//
//	//释放堆区数组,在释放数组的时候要加中括号[];
//	delete[] arr;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}