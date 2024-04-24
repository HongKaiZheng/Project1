//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//请声明一个5个元素的数组,并且将元素逆置
//	//(如原数组元素为:1,3,2,5,4;逆置后输出结果为:4,5,2,3,1;)
//	int arr[5] = { 1,3,2,5,4 };
//	cout << "数组逆置前:" << endl;
//	for (int i = 0; i < 5;  i++) {
//		cout << arr[i] << endl;
//	}
//	//获取到数组第一个元素
//	int start = 0;
//	//获取到数组最后一个元素
//	int end = sizeof(arr) / sizeof(arr[0])-1;
//	//因为让数组的最后一个元素变为第一个元素,所以创建一个临时变量来存储数组的元素
//	while (start < end)
//	{
//		//元素互换的代码
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	cout << "数组逆置后:" << endl;
//	for (int j = 0; j < 5; j++) {
//		cout << arr[j] << endl;
//	}
//	system("pause");
//	return 0;
//}