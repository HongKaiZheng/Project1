//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//二维数组名的作用
//
//	//1.可以统计整个数组在内存中的长度
//	int arr[2][3] = {
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "二维数组arr所占用内存空间大小为:" << sizeof(arr) << endl;
//	cout << "二维数组arr第一行占用内存空间大小为:" << sizeof(arr[0]) << endl;
//	cout << "二维数组arr第一个元素占用内存空间大小为:" << sizeof(arr[0][0]) << endl;
//	cout << "二维数组有" << sizeof(arr)/sizeof(arr[0]) <<"行" << endl;
//	cout << "二维数组有" << sizeof(arr[0]) / sizeof(arr[0][0]) << "列" << endl;
//	//2.可以获取数组在内存中的首地址
//	cout << "二维数组在内存中的首地址为:" << arr << endl;
//	cout << "二维数组第一行在内存中的首地址为:" << arr[0] << endl;
//	cout << "二维数组第二行在内存中的首地址为:" << arr[1] << endl;
//	cout << "二维数组第一个元素在内存中的首地址为:" << &arr[0][0] << endl;
//	system("pause");
//	return 0;
//}