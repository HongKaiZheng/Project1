//#include<iostream>
//using namespace std;
//
////��Ա��������Ԫ
//class Building;
//class GoodGay
//{
//public:
//	void visit01();//��visit01���Է��ʵĵ�Building�е�˽�г�Ա
//	void visit02();//��visit02�����Է��ʵĵ�Building�е�˽�г�Ա
//	Building* building;
//	GoodGay();
//};
//class Building
//{
//	friend void GoodGay::visit01();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//public:
//	Building();
//};
//Building::Building()
//{
//	m_SittingRoom = "����";// ��ʼ��������Ա����
//	m_BedRoom = "����";// ��ʼ��������Ա����
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit01()
//{
//	cout << "visit01��Ȩ�޿��Է��ʵ���:" << building->m_SittingRoom << endl;
//	cout << "visit01��Ȩ�޿��Է��ʵ���:" << building->m_BedRoom << endl;
//}
//void GoodGay::visit02() {
//	cout << "visit02��Ȩ�޿��Է��ʵ���:" << building->m_SittingRoom << endl;
//	//cout << "visit02��Ȩ�޿��Է��ʵ���:" << building->m_BedRoom << endl;
//}
//void test01()
//{
//	GoodGay G1;
//	G1.visit01();
//	G1.visit02();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}