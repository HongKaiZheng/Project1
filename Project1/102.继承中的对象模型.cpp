//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////在子类继承中,会把父类所有非静态成员属性都继承过来
////父类中的私有成员属性,是被编译器隐藏起来了,因此是访问不到,但确实是被继承下来了
//class Son : public Base
//{
//public:
//	int m_D;
//};
//
//
//void test01()
//{
//	cout << "sizeof Son = " << sizeof(Son) << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}