//#include<iostream>
//using namespace std;
//
//
////����ѧ���ṹ��
//struct student
//{
//	//ѧ������
//	string name;
//	//ѧ������
//	int score;
//};
//
////������ʦ�ṹ��
//struct teacher
//{
//	//��ʦ����
//	string name;
//	//��ʦѧ������
//	struct student sArray[5];
//};
////��������,��ѧ������ʦ��ֵ
//void allocateSpace(struct teacher TeaArry[], int len)
//{
//	//���ѭ������ʦ��ֵ
//	for (int i = 0; i < len; i++) {
//		string Tname = "ABCDE";
//		TeaArry[i].name = "��ʦ_";
//		TeaArry[i].name += Tname[i];
//		//�ڲ�ѭ����ѧ����ֵ
//		for (int j = 0; j < 5; j++) {
//			TeaArry[i].sArray[j].name = "ѧ��_";
//			TeaArry[i].sArray[j].name += Tname[i];
//			TeaArry[i].sArray[j].score = rand() % 60 + 40;
//		}
//	}
//}
//void print(struct teacher TeaArray[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << "��ʦ����:" << TeaArray[i].name ;
//		cout << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "�����ʦ�����ѧ����:" << TeaArray[i].sArray[j].name
//				<< "������:" << TeaArray[i].sArray[j].score << endl;
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	/*����˵��:
//	ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ��
//	�����������ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�
//	����ʦ������һ�����5��ѧ����������Ϊ��Աѧ���ĳ�Ա�����������Է�����
//	����������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�*/ 
//
//	//���������
//	srand((unsigned int)time(NULL));
//	//������ʦ����
//	struct teacher TeaArray[3];
//	//�������鳤��
//	int len = sizeof(TeaArray) / sizeof(TeaArray[0]);
//	//������������ʦ��ѧ����ֵ
//	allocateSpace(TeaArray, len);
//	//����������ӡ��Ϣ
//	print(TeaArray,len);
//	system("pause");
//	return 0;
//}