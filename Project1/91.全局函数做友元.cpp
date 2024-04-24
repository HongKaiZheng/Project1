//#include<iostream>
//using namespace std;
//
//class Build
//{
//	//使用友元技术,声明全局函数goodGay是可以访问Build中的私有属性
//	friend void goodGay(Build& build);
//public:
//	Build()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
////建立全局函数
//void goodGay(Build& build) {
//	cout << "好兄弟你在访问: " << build.m_SittingRoom << endl;
//	cout << "好兄弟你在访问: " << build.m_BedRoom << endl;
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