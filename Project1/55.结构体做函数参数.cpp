//#include<iostream>
//using namespace std;
//
////����ṹ��
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
////ֵ����
//void PrintStudent(struct student s)
//{
//	cout << "ֵ������ ѧ������:  " << s.name << "  ѧ������:  " << s.age << "  ѧ������:  " << s.score << endl;
//}
////��ַ����
//void PrintStudent2(struct student* p)
//{
//	cout << "��ַ������ ѧ������:  " << p->name << "  ѧ������:  " << p->age << "  ѧ������:  " << p->score << endl;
//}
//int main()
//{
//	//�����ṹ�����
//	student s = { "�鿪��",20,100 };
//	//���ṹ����Ϊ�������뺯��
//	cout << "main������ ѧ������:  " << s.name << "  ѧ������:  " << s.age << "  ѧ������:  " << s.score << endl;
//	// ֵ����
//	PrintStudent(s);
//	//��ַ����
//	PrintStudent2(&s);
//	system("pause");
//	return 0;
//}