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
////在类外写类内构造函数
//Building::Building() {
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::vist()
//{
//	cout << "你的好兄弟在访问: " << building->m_SittingRoom << endl;
//	cout << "你的好兄弟在访问: " << building->m_BedRoom << endl;
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