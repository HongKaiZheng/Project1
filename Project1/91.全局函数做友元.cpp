//#include<iostream>
//using namespace std;
//
//class Build
//{
//	//ʹ����Ԫ����,����ȫ�ֺ���goodGay�ǿ��Է���Build�е�˽������
//	friend void goodGay(Build& build);
//public:
//	Build()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
////����ȫ�ֺ���
//void goodGay(Build& build) {
//	cout << "���ֵ����ڷ���: " << build.m_SittingRoom << endl;
//	cout << "���ֵ����ڷ���: " << build.m_BedRoom << endl;
//}
//
//void test01()
//{
//	Build b;
//	goodGay(b);
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}