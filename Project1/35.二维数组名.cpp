//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//��ά������������
//
//	//1.����ͳ�������������ڴ��еĳ���
//	int arr[2][3] = {
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "��ά����arr��ռ���ڴ�ռ��СΪ:" << sizeof(arr) << endl;
//	cout << "��ά����arr��һ��ռ���ڴ�ռ��СΪ:" << sizeof(arr[0]) << endl;
//	cout << "��ά����arr��һ��Ԫ��ռ���ڴ�ռ��СΪ:" << sizeof(arr[0][0]) << endl;
//	cout << "��ά������" << sizeof(arr)/sizeof(arr[0]) <<"��" << endl;
//	cout << "��ά������" << sizeof(arr[0]) / sizeof(arr[0][0]) << "��" << endl;
//	//2.���Ի�ȡ�������ڴ��е��׵�ַ
//	cout << "��ά�������ڴ��е��׵�ַΪ:" << arr << endl;
//	cout << "��ά�����һ�����ڴ��е��׵�ַΪ:" << arr[0] << endl;
//	cout << "��ά����ڶ������ڴ��е��׵�ַΪ:" << arr[1] << endl;
//	cout << "��ά�����һ��Ԫ�����ڴ��е��׵�ַΪ:" << &arr[0][0] << endl;
//	system("pause");
//	return 0;
//}