//#include<iostream>
//using namespace std;
//
////访问权限有三种:
////public		公共权限	成员在类内外都可以访问
////protected		保护权限	成员在类外不可访问,在类内可以访问
////private		私有权限	成员在类外不可访问,在类内可以访问
//
//class Person
//{
//	//创建公共权限
//public:
//	string name;
//	//创建保护权限
//protected:
//	string Car;
//	//创建私有权限
//private:
//	int password;
//
//	//在类内访问各种权限,任何权限都可以访问的到
//	void func()
//	{
//		name = "洪开政";
//		Car = "宝马";
//		password = 191206;
//	}
//};
//
//int main()
//{
//	//在类外访问三种权限
//	//创建实例化具体对象
//	Person p1;
//	//通过赋值访问三种权限,只有public可以访问成功
//	p1.name = "何思恩";
//	//p1.Car = "奔驰";赋值失败,因为保护权限类外不可访问
//	//p1.password = 031120; 赋值失败,因为私有权限类外不可访问
//
//	system("pause");
//	return 0;
//}