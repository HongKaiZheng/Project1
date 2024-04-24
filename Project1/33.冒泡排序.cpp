//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//利用冒泡排序实现升序序列
//	int arr[] = { 4,2,8,0,5,7,1,3,9 };
//	cout << "排序前:" << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i] << endl;
//	}
//	//开始冒泡排序
//	//排序总轮次等于元素个数-1,所以一共进行8轮排序
//	for (int i = 0; i < 9 - 1; i++) {
//		//每轮对比次数=元素个数-排序轮次-1
//		for (int j = 0; j < 9 - i - 1; j++) {
//			//实现两个数之间的交换
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	cout << "排序后:" << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i] << endl;
//	}
//	system("pause");
//	return 0;
//}