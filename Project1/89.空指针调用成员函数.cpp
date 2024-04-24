//#include<iostream>
//using namespace std;
//
////空指针访问成员函数
//
//class Person
//{
//public:
//	void showclassname()
//	{
//		cout << " class name is Person" << endl;
//	}
//	void showage()
//	{
//		//这里解决报错,如果传入的是空指针,将直接返回,不执行下一步
//		if (this == NULL) {
//			return;
//		}
//		//在这里报错的原因是因为传入的指针是NULL
//		cout << "年龄是:" << this->age << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->showclassname();
//
//	p->showage(); //因为一开始初始化指针为NULL,所以一个空指针不能访问到成员函数中的变量
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}