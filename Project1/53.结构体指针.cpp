//#include<iostream>
//using namespace std;
//
////定义结构体
//struct Student
//{
//	string name; //定义学生
//	int age;	//定义年龄
//	int score;	//定义分数
//};
//
//int main()
//{
//	//创建学生结构体变量
//	struct Student StuArray[2] = {
//		{"洪开政",20,100,},
//		{"何思恩",20,99}
//	};
//	//通过指针指向结构体变量
//	struct Student* p = StuArray;
//	//通过指针访问结构体变量中的数据
//	for (int i = 0; i < 2; i++)
//	{
//		cout << "姓名:  " << p->name << "  年龄:  " << p->age << "  分数:  " << p->score << endl;
//		p++;
//	}
//	system("pause");
//	return 0;
//}