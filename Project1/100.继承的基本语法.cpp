//#include<iostream>
//using namespace std;
//
//
//////java页面
////class Java
////{
////public:
////	void header() {
////		cout << "首页 ,公开课,登录,注册...(公共头部)" << endl;
////	}
////	void footer() {
////		cout << "帮助中心,交流中心,站内地图...(公共底部)" << endl;
////
////	}
////	void left() {
////		cout << "java,python,C++...(公共分类列表)" << endl;
////
////	}
////	void content() {
////		cout << "java学科视频" << endl;
////	}
////};
////class Python
////{
////public:
////	void header() {
////		cout << "首页 ,公开课,登录,注册...(公共头部)" << endl;
////	}
////	void footer() {
////		cout << "帮助中心,交流中心,站内地图...(公共底部)" << endl;
////
////	}
////	void left() {
////		cout << "java,python,C++...(公共分类列表)" << endl;
////
////	}
////	void content() {
////		cout << "Python学科视频" << endl;
////	}
////};
////
////以上代码为普通写法,接下来用继承写法
//
//
////继承实现页面,把上面重复的代码封装成一个类
//
//class BaesPage
//{
//public:
//	void header() {
//		cout << "首页 ,公开课,登录,注册...(公共头部)" << endl;
//	}
//	void footer() {
//		cout << "帮助中心,交流中心,站内地图...(公共底部)" << endl;
//	
//	}
//	void left() {
//		cout << "java,python,C++...(公共分类列表)" << endl;
//	
//	}
//};
//
////java页面
//class Java :public BaesPage
//{
//public:
//	void content()
//	{
//		cout << "java学科类视频" << endl;
//	}
//};
//
////python页面
//class Python :public BaesPage
//{
//public:
//	void content()
//	{
//		cout << "Python学科类视频" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "java下载视频页面如下:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "---------------------" << endl;
//
//	cout << "Python下载视频页面如下:" << endl;
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