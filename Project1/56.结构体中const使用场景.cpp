//#include<iostream>
//using namespace std;
//
//
////定义结构体
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
////结构体中const使用场景
////使用指针能节省很多空间,因为指针只占用4个字节
//void PrintStudent( const student* s)
//{
//	//s->age = 100; //加入了const,任何修改操作都会报错,可以防止我们的误操作;
//	cout << "学生姓名:  " << s->name << "  学生年龄:  " << s->age << "  学生分数:  " << s->score << endl;
//}
//int main()
//{
//	//创建结构体变量
//	struct student s = { "洪开政",20,100 };
//	
//	PrintStudent(&s);
//	system("pause");
//	return 0;
//}