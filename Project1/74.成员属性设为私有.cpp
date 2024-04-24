//#include<iostream>
//using namespace std;
//
////成员属性设为私有
//class Person
//{
//	//因为成员属性是私有的,外界想写入成员属性,只能在类内建立一个公有权限
//	//让外部通过访问公有权限来访问类内私有权限
//
//public:
//	//设置写入姓名
//	void setName(string setName)
//	{
//		Name = setName;
//	}
//	//设置读姓名
//	string getName()
//	{
//		return Name;
//	}
//
//	//获取年龄
//	int getAge()
//	{
//		return Age;
//	}
//	//获取偶像
//	void setIdol(string setIdol)
//	{
//		Idol = setIdol;
//	}
//
//private:
//	string Name;//设置名字,可读可写
//
//	int Age = 20;//设置年龄,只能读不可写
//
//	string Idol; //偶像,只写
//	
//};
//
//int main()
//{
//	//创建实例化具体对象
//	Person p1;
//	//通过访问类内的共有权限,对类内的私有权限进行赋值和读
//	p1.setName("洪开政");
//	p1.setIdol("马克思");
//	cout << "姓名是: " << p1.getName() << endl;
//	cout << "年龄是: " << p1.getAge() << endl;
//	system("pause");
//	return 0;
//}