//#include<iostream>
//using namespace std;
//
////案例实现,封装一个函数,使用冒泡排序,实现对整数型的数组进行升序排序
//
////创建冒泡排序函数
//void bubbleSort(int* arr, int len)
//{
//	//进行冒泡排序
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			//进行两数交换
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////写一个打印数组函数
//void PrintArray(int* arr, int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//}
//int main()
//{
//	//创建一个数组
//	int arr[10] = { 2,1,5,7,4,8,6,10,3,9 };
//	//数组长度
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//列出排序前的结果
//	cout << "排序前:" << endl;
//	PrintArray(arr, len);
//	//创建一个函数,把数组和数组长度传进去
//	bubbleSort(arr, len);
//	//打印出最后排序的结果
//	cout << "排序后:" << endl;
//	PrintArray(arr, len);
//	system("pause");
//	return 0;
//}