//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//����ð������ʵ����������
//	int arr[] = { 4,2,8,0,5,7,1,3,9 };
//	cout << "����ǰ:" << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i] << endl;
//	}
//	//��ʼð������
//	//�������ִε���Ԫ�ظ���-1,����һ������8������
//	for (int i = 0; i < 9 - 1; i++) {
//		//ÿ�ֶԱȴ���=Ԫ�ظ���-�����ִ�-1
//		for (int j = 0; j < 9 - i - 1; j++) {
//			//ʵ��������֮��Ľ���
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	cout << "�����:" << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i] << endl;
//	}
//	system("pause");
//	return 0;
//}