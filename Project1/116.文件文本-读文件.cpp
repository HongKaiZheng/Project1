//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
//void test01()
//{
//
//	//1.����ͷ�ļ�
//
//	//2.����������
//	ifstream ifs;
//	//3.���ļ�
//	ifs.open("test.txt", ios::in);
//	//�ж��Ƿ�򿪳ɹ�
//	if (!ifs.is_open()) {
//		cout << "�ļ���ʧ��" << endl;
//	}
//	//4.������
//	
//	//��һ�ֶ�ȡ��ʽ
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�ڶ��ֶ�ȡ��ʽ
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf))) {
//	//	cout << buf << endl;
//	//}
//
//	//������
//	//string buf;
//	//while (getline(ifs,buf)) //һ��һ�ж�ȡ
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������ //���Ǻܽ����õ�����
//	char c;
//	while ((c = ifs.get()) != EOF)//�ж��ļ���û�ж����ļ�β   ifs.get()��һ��һ����ȡ�ַ�
//	{
//		cout << c; //����ע��,��Ϊ��һ��һ���ַ���,���Բ�Ҫ����
//	}
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}