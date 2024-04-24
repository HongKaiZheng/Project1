//#include<iostream>
//using namespace std;
//
//
////构造函数的分类 
////按照参数分类:有参构造,无参构造
////按照类型分类:普通构造,拷贝构造
//
//class Person
//{
//public:
//	int age;
//	//无参构造函数:
//	Person() {
//		cout << "Person的无参构造函数的调用" << endl;
//	}
//	//有参构造函数
//	Person(int a) {
//		int age = a;
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//	//析构函数:
//	~Person() {
//
//	}
//
//};
//
////调用
//void test01()
//{
//	//括号法
//	Person p;		//调用无参构造函数
//	Person p2(10);	//调用有参构造函数
//	Person p3(p2);	//调用拷贝构造函数
//
//
//	//注意:使用括号法调用无参构造函数的时候不要加()
//
//	
//	//显示法
//	Person p4;				//默认构造
//	Person p5 = Person(10); //有参构造
//	Person p6 = Person(p5); //拷贝构造
//	Person(10); //匿名对象,当程序执行结束之后,系统会立即回收掉匿名对象
//	
//	//注意:
//	//不要利用拷贝构造函数,去初始化匿名对象
//	//Person(p6);在C++中,使用拷贝函数作为匿名对象的时候,
//	// 系统会把他编译为:Person p6;相当于重新定义了一次p6
//
//
//	//隐式转化法
//	Person p7 = 10;//有参构造
//	Person p8 = p7;//拷贝构造
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}