//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//
//void test01()
//{
//
//	//1.包含头文件
//
//	//2.创建流对象
//	ifstream ifs;
//	//3.打开文件
//	ifs.open("test.txt", ios::in);
//	//判断是否打开成功
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//	}
//	//4.读数据
//	
//	//第一种读取方式
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第二种读取方式
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf))) {
//	//	cout << buf << endl;
//	//}
//
//	//第三种
//	//string buf;
//	//while (getline(ifs,buf)) //一行一行读取
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第四种 //不是很建议用第四种
//	char c;
//	while ((c = ifs.get()) != EOF)//判断文件有没有读到文件尾   ifs.get()是一个一个获取字符
//	{
//		cout << c; //这里注意,因为是一个一个字符读,所以不要换行
//	}
//
//	//5.关闭文件
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}