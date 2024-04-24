//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//数组名称的用途:
//	//1,可以统计整个数组在内存中的长度
//	//2,可以获取数组在内存中的首地址,第一个元素的首地址和整个数组的首地址一样,
//	// 之后的每一个元素差前一个元素4个字节的长度
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "整个数组占用内存空间为:" << sizeof(arr) << endl;
//	cout << "每个元素占用的内存空间是:" << sizeof(arr[0]) << endl;
//	cout << "数组中元素个数为:" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "数组在内存的首地址是:" << arr << endl;
//	cout << "数组中第一个元素的地址是:" << &arr[0] << endl;
//	system("pause");
//	return 0;
//}