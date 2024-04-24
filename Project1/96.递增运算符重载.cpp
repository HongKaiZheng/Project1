//#include<iostream>
//using namespace std;
//
////递增运算符重载
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger& myint);
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//前置递增运算符重载,在前置递增运算符重载中,要返回引用
//	MyInteger& operator++()
//	{
//		//进行递增操作
//		m_Num++;
//		//返回当前的值
//		return *this;
//	}
//	//后置递增运算符的重载,不能返回引用,要返回值,而且在形参要使用int占位参数,来区分前置递增
//	MyInteger operator++(int)
//	{
//		//要先记录当前的值
//		MyInteger temp = *this;
//
//		//然后进行递增操作
//		m_Num++;
//
//		//最后返回递增前的结果 (因为是后置递增运算,所以要把递增前的结果返回去,因为后置递增是先执行
//		// 表达式,后进行递增)
//		return temp;  //因为返回的是temp局部变量,所以在前面的数据类型不能是引用,否则是非法访问
//
//	}
//private:
//	int m_Num;
//};
//
////重载左移运算符
//ostream& operator<<(ostream& cout, MyInteger &myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << "前置递增运算符的重载:" << ++(++myint) << endl;
//	cout <<"前置递增运算符的重载:"<< myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//	myint++;
//	cout << "后置递增运算符的重载:" << myint << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}