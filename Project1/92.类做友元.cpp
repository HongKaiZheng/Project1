//#include<iostream>
//using namespace std;
//
//class Building;
//class GoodGay
//{
//public:
//	void vist();
//	Building* building;
//
//public:
//	GoodGay();
//};
//
//class Building
//{
//	friend class GoodGay;
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
////������д���ڹ��캯��
//Building::Building() {
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::vist()
//{
//	cout << "��ĺ��ֵ��ڷ���: " << building->m_SittingRoom << endl;
//	cout << "��ĺ��ֵ��ڷ���: " << building->m_BedRoom << endl;
//}
//void test01()
//{
//	GoodGay G1;
//	G1.vist();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}