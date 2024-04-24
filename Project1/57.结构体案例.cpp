//#include<iostream>
//using namespace std;
//
//
////定义学生结构体
//struct student
//{
//	//学生姓名
//	string name;
//	//学生分数
//	int score;
//};
//
////定义老师结构体
//struct teacher
//{
//	//老师姓名
//	string name;
//	//老师学生数组
//	struct student sArray[5];
//};
////创建函数,给学生和老师赋值
//void allocateSpace(struct teacher TeaArry[], int len)
//{
//	//外层循环给老师赋值
//	for (int i = 0; i < len; i++) {
//		string Tname = "ABCDE";
//		TeaArry[i].name = "老师_";
//		TeaArry[i].name += Tname[i];
//		//内层循环给学生赋值
//		for (int j = 0; j < 5; j++) {
//			TeaArry[i].sArray[j].name = "学生_";
//			TeaArry[i].sArray[j].name += Tname[i];
//			TeaArry[i].sArray[j].score = rand() % 60 + 40;
//		}
//	}
//}
//void print(struct teacher TeaArray[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << "老师姓名:" << TeaArray[i].name ;
//		cout << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "这个老师带领的学生是:" << TeaArray[i].sArray[j].name
//				<< "分数是:" << TeaArray[i].sArray[j].score << endl;
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	/*案例说明:
//	学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，
//	需求如下设计学生和老师的结构体，其中在老师的结构体中，
//	有老师姓名和一个存放5名学生的数组作为成员学生的成员有姓名、考试分数，
//	创建数组存放3名老师，通过函数给每个老师及所带的学生赋值最终打印出老师数据以及老师所带的学生数据。*/ 
//
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	//创建老师数组
//	struct teacher TeaArray[3];
//	//计算数组长度
//	int len = sizeof(TeaArray) / sizeof(TeaArray[0]);
//	//创建函数给老师和学生赋值
//	allocateSpace(TeaArray, len);
//	//创建函数打印信息
//	print(TeaArray,len);
//	system("pause");
//	return 0;
//}