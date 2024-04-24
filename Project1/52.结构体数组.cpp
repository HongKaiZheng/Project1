//#include<iostream>
//using namespace std;
//
//
////定义一个结构体
//struct Student 
//{
//	//姓名
//	string name;
//
//	//年龄
//	int age;
//
//	//分数
//	int score;
//
//};
//int main()
//{
//	//结构体数组,将定义的结构放入数组中方便管理
//	//创建结构体数组
//	struct Student StuArray[3] = { {"洪开政",20,100},{"李四",20,80},{"王五",19,100} };
//	//给结构体的元素赋值
//	StuArray[2].name = "何思恩";
//	StuArray[2].age = 20;
//	StuArray[2].score = 100;
//	//遍历结构体数组
//	for (int i = 0; i < 3; i++) {
//		cout << "  名字:  " << StuArray[i].name << "  年龄:  " << StuArray[i].age << "  分数:  " << StuArray[i].score << endl;
//	}
//	system("pause");
//	return 0;
//}