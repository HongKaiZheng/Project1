//#include<iostream>
//using namespace std;
//
//struct hero
//{
//	//Ӣ������
//	string name;
//	//Ӣ������
//	int age;
//	//Ӣ���Ա�
//	string gender;
//};
////ð�������㷨
//void BubblSorting(struct hero h[],int len)
//{
//	//���ѭ�������ִ�
//	for (int i = 0; i < len-1; i++) {
//		//�ڲ�ѭ������ÿ�ζԱ���
//		for (int j = 0; j < len - i - 1; j++) {
//			if (h[j].age > h[j + 1].age) {
//				//���н���
//				struct hero temp = h[j];
//				h[j] = h[j + 1];
//				h[j + 1] = temp;
//			}
//		}
//	}
//}
////������ӡ����
//void PrintHero(struct hero h[],int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << "����������������:" <<
//			"����: " << h[i].name << "  ����:  " << h[i].age << "  �Ա�:  " << h[i].gender << endl;
//	}
//}
//int main()
//{
//	/*���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;
//	�����ṹ�����飬�����д��5��Ӣ��ͨ��ð��������㷨���������е�Ӣ�۰������������������
//	���մ�ӡ�����Ľ����*/
//
//	//�����ṹ������
//	struct hero h[5] = {
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"},
//	};
//	int len = sizeof(h) / sizeof(h[0]);
//	//����ð��������
//	BubblSorting(h,len);
//	//������ӡ����
//	PrintHero(h, len);
//	system("pause");
//	return 0;
//}