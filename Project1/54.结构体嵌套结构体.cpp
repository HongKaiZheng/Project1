//#include<iostream>
//using namespace std;
//
//
////定义学生结构体
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
////定义老师结构体
//struct teacher
//{
//	int id;//教师编号
//	string name;//教师姓名
//	int age;//年龄
//	struct Student stu;
//};
//
//int main()
//{
//	//创建学生结构体变量
//	Student stu = { "小王",20,100 };
//	//创建老师结构体变量
//	teacher t = { 10000,"老王",45,stu };
//	cout << "教师编号:  " << t.id << "  教师姓名:  " << t.name << "  教师年龄:  " << t.age
//		<< "  教师学生姓名:  " << t.stu.name << "  教师学生年龄:  " << t.stu.age << "  教师学生分数:  " << t.stu.score << endl;
//	system("pause");
//	return 0;
//}