//#include<iostream>
//using namespace std;
//
//
//class student
//{
//public:
//	//设计学生属性:
//	//学生姓名
//	string name;
//	//学生学号
//	long long studentID;
//
//	//行为:显示学生的姓名和学号
//	void showstudent()
//	{
//		cout << " 学生的姓名是:  " << name << "   学生的学号是:" << studentID << endl;
//	}
//	//可以利用行为给属性赋值
//	void setName(string setname)
//	{
//		name = setname;
//	}
//	void setID(long long setid)
//	{
//		studentID = setid;
//	}
//};
//int main()
//{
//	//案例说明:设计一个学生类,属性有姓名和学号,可以给姓名和学号赋值,可以显示学生的姓名和学号
//
//	//创建学生对象
//	student s1;
//
//	//给创建对象属性进行赋值
//	/*s1.name = "洪开政";*/   
//	/*s1.studentID = 2206030320;*/ 
//
//
//	//利用行为给属性赋值的办法
//	s1.setName("洪开政");
//	s1.setID(2206030320);
//  
//	//调用类的行为
//	s1.showstudent();
//	system("pause");
//	return 0;
//}