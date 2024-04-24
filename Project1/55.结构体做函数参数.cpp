//#include<iostream>
//using namespace std;
//
////定义结构体
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
////值传递
//void PrintStudent(struct student s)
//{
//	cout << "值传递中 学生姓名:  " << s.name << "  学生年龄:  " << s.age << "  学生分数:  " << s.score << endl;
//}
////地址传递
//void PrintStudent2(struct student* p)
//{
//	cout << "地址传递中 学生姓名:  " << p->name << "  学生年龄:  " << p->age << "  学生分数:  " << p->score << endl;
//}
//int main()
//{
//	//创建结构体变量
//	student s = { "洪开政",20,100 };
//	//将结构体作为参数传入函数
//	cout << "main函数中 学生姓名:  " << s.name << "  学生年龄:  " << s.age << "  学生分数:  " << s.score << endl;
//	// 值传递
//	PrintStudent(s);
//	//地址传递
//	PrintStudent2(&s);
//	system("pause");
//	return 0;
//}