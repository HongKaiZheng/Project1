//#include<iostream>
//using namespace std;
//
////����ȫ�ֱ���
//int g_a = 10;
//int g_b = 10;
//
////����const���ε�ȫ�ֱ���
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main()
//{
//	//�����ֲ�����
//	int a = 10;
//	int b = 10;
//	cout << "�ֲ�����a�ĵ�ַ��: " << (int)&a  << endl;
//	cout << "�ֲ�����b�ĵ�ַ��: " << (int)&b  << endl;
//
//	//�鿴ȫ�ֱ�����ַ
//	cout << "ȫ�ֱ���g_a�ĵ�ַ��: " << (int)&g_a << endl;
//	cout << "ȫ�ֱ���g_b�ĵ�ַ��: " << (int)&g_b << endl;
//
//	//���þ�̬����,����ͨ����ǰ���static�ͱ�Ϊ��̬����
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "��̬����s_a�ĵ�ַ��:" << (int)&s_a << endl;
//	cout << "��̬����s_b�ĵ�ַ��:" << (int)&s_b << endl;
//
//	//����,�������ַ�������,const���εľֲ�����,const���ε�ȫ�ֱ���
//
//	//�ַ�������
//	cout << "�ַ��������ĵ�ַ��: " << (int) & "hello word" << endl;
//	//const���ε�ȫ�ֱ���
//	cout << "const���ε�ȫ�ֱ���c_g_a�ĵ�ַ��: " << (int)&c_g_a << endl;
//	cout << "const���ε�ȫ�ֱ���c_g_b�ĵ�ַ��: " << (int)&c_g_b << endl;
//
//	//const���εľֲ�����
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "const���εľֲ�����c_l_a�ĵ�ַ�� " << (int)&c_l_a << endl;
//	cout << "const���εľֲ�����c_l_b�ĵ�ַ�� " << (int)&c_l_b << endl;
//	system("pause");
//	return 0;
//}