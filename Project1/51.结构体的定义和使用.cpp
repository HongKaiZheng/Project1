//#include<iostream>
//using namespace std;
//
////1,创建学生数据类型:学生包括(姓名,年龄,分数)
////自定义数据类型,一些类型集合组成的一个类型
////语法 struct 数据名称 {成员列表}
//
//struct Student
//{
//	//成员列表
//
//	//姓名
//	string name;
//
//	//年龄
//	int age;
//
//	//分数
//	int score;
//}s3;//顺便创建结构体变量
//
//
//
//int main()
//{
//	//2,通过学生类型创建具体学生
//	//2.1 struct Student s1; struct关键字可以省略
//	struct Student s1;
//	//给s1的属性赋值,通过 . 来访问
//	s1.name = "洪开政";
//	s1.age = 20;
//	s1.score = 100;
//	cout << "姓名是:  " << s1.name << "  年龄是:  " << s1.age << "  分数是:  " << s1.score << endl;
//
//	//2.2 struct Student s2 = {...};
//	struct Student s2 = { "何思恩",20,100 };
//	cout << "姓名是:  " << s2.name << "  年龄是:  " << s2.age << "  分数是:  " << s2.score << endl;
//
//	//2.3,在定义结构体的时候顺便创建结构体变量 : 看第20行的s3;
//	s3.name = "张三三";
//	s3.age = 19;
//	s3.score = 60;
//	cout << "姓名是:  " << s3.name << "  年龄是:  " << s3.age << "  分数是:  " << s3.score << endl;
//	system("pause");
//	return 0;
//}