//#include<iostream>
//using namespace std;
//#include<fstream>
////二进制写文件
//
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	//写文件步骤:
//	//1.包含头文件
//	//2.创建输出流
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	//3.打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);   //这一步可以和第二步一同写
//	//4.写文件
//	Person p = {"开政", 20};
//	ofs.write((const char*)&p, sizeof(Person));
//	//5.关闭文件
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}