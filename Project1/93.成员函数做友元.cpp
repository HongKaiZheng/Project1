//#include<iostream>
//using namespace std;
//
////成员函数做友元
//class Building;
//class GoodGay
//{
//public:
//	void visit01();//让visit01可以访问的到Building中的私有成员
//	void visit02();//让visit02不可以访问的到Building中的私有成员
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
//	m_SittingRoom = "客厅";// 初始化公共成员变量
//	m_BedRoom = "卧室";// 初始化公共成员变量
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit01()
//{
//	cout << "visit01的权限可以访问的是:" << building->m_SittingRoom << endl;
//	cout << "visit01的权限可以访问的是:" << building->m_BedRoom << endl;
//}
//void GoodGay::visit02() {
//	cout << "visit02的权限可以访问的是:" << building->m_SittingRoom << endl;
//	//cout << "visit02的权限可以访问的是:" << building->m_BedRoom << endl;
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