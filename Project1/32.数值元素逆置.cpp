//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//������һ��5��Ԫ�ص�����,���ҽ�Ԫ������
//	//(��ԭ����Ԫ��Ϊ:1,3,2,5,4;���ú�������Ϊ:4,5,2,3,1;)
//	int arr[5] = { 1,3,2,5,4 };
//	cout << "��������ǰ:" << endl;
//	for (int i = 0; i < 5;  i++) {
//		cout << arr[i] << endl;
//	}
//	//��ȡ�������һ��Ԫ��
//	int start = 0;
//	//��ȡ���������һ��Ԫ��
//	int end = sizeof(arr) / sizeof(arr[0])-1;
//	//��Ϊ����������һ��Ԫ�ر�Ϊ��һ��Ԫ��,���Դ���һ����ʱ�������洢�����Ԫ��
//	while (start < end)
//	{
//		//Ԫ�ػ����Ĵ���
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	cout << "�������ú�:" << endl;
//	for (int j = 0; j < 5; j++) {
//		cout << arr[j] << endl;
//	}
//	system("pause");
//	return 0;
//}