//#include<iostream>
//using namespace std;
//
//
//////javaҳ��
////class Java
////{
////public:
////	void header() {
////		cout << "��ҳ ,������,��¼,ע��...(����ͷ��)" << endl;
////	}
////	void footer() {
////		cout << "��������,��������,վ�ڵ�ͼ...(�����ײ�)" << endl;
////
////	}
////	void left() {
////		cout << "java,python,C++...(���������б�)" << endl;
////
////	}
////	void content() {
////		cout << "javaѧ����Ƶ" << endl;
////	}
////};
////class Python
////{
////public:
////	void header() {
////		cout << "��ҳ ,������,��¼,ע��...(����ͷ��)" << endl;
////	}
////	void footer() {
////		cout << "��������,��������,վ�ڵ�ͼ...(�����ײ�)" << endl;
////
////	}
////	void left() {
////		cout << "java,python,C++...(���������б�)" << endl;
////
////	}
////	void content() {
////		cout << "Pythonѧ����Ƶ" << endl;
////	}
////};
////
////���ϴ���Ϊ��ͨд��,�������ü̳�д��
//
//
////�̳�ʵ��ҳ��,�������ظ��Ĵ����װ��һ����
//
//class BaesPage
//{
//public:
//	void header() {
//		cout << "��ҳ ,������,��¼,ע��...(����ͷ��)" << endl;
//	}
//	void footer() {
//		cout << "��������,��������,վ�ڵ�ͼ...(�����ײ�)" << endl;
//	
//	}
//	void left() {
//		cout << "java,python,C++...(���������б�)" << endl;
//	
//	}
//};
//
////javaҳ��
//class Java :public BaesPage
//{
//public:
//	void content()
//	{
//		cout << "javaѧ������Ƶ" << endl;
//	}
//};
//
////pythonҳ��
//class Python :public BaesPage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ������Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "java������Ƶҳ������:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "---------------------" << endl;
//
//	cout << "Python������Ƶҳ������:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}