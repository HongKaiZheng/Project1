//#include<iostream>
//using namespace std;
//
////����ʵ��,��װһ������,ʹ��ð������,ʵ�ֶ������͵����������������
//
////����ð��������
//void bubbleSort(int* arr, int len)
//{
//	//����ð������
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			//������������
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////дһ����ӡ���麯��
//void PrintArray(int* arr, int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//}
//int main()
//{
//	//����һ������
//	int arr[10] = { 2,1,5,7,4,8,6,10,3,9 };
//	//���鳤��
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//�г�����ǰ�Ľ��
//	cout << "����ǰ:" << endl;
//	PrintArray(arr, len);
//	//����һ������,����������鳤�ȴ���ȥ
//	bubbleSort(arr, len);
//	//��ӡ���������Ľ��
//	cout << "�����:" << endl;
//	PrintArray(arr, len);
//	system("pause");
//	return 0;
//}