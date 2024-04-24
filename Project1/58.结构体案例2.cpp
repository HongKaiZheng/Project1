//#include<iostream>
//using namespace std;
//
//struct hero
//{
//	//英雄姓名
//	string name;
//	//英雄年龄
//	int age;
//	//英雄性别
//	string gender;
//};
////冒泡排序算法
//void BubblSorting(struct hero h[],int len)
//{
//	//外层循环控制轮次
//	for (int i = 0; i < len-1; i++) {
//		//内层循环控制每次对比数
//		for (int j = 0; j < len - i - 1; j++) {
//			if (h[j].age > h[j + 1].age) {
//				//进行交换
//				struct hero temp = h[j];
//				h[j] = h[j + 1];
//				h[j + 1] = temp;
//			}
//		}
//	}
//}
////创建打印函数
//void PrintHero(struct hero h[],int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << "按照年龄排序结果是:" <<
//			"姓名: " << h[i].name << "  年龄:  " << h[i].age << "  性别:  " << h[i].gender << endl;
//	}
//}
//int main()
//{
//	/*设计一个英雄的结构体，包括成员姓名，年龄，性别;
//	创建结构体数组，数组中存放5名英雄通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，
//	最终打印排序后的结果，*/
//
//	//创建结构体数组
//	struct hero h[5] = {
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"},
//	};
//	int len = sizeof(h) / sizeof(h[0]);
//	//创建冒泡排序函数
//	BubblSorting(h,len);
//	//创建打印函数
//	PrintHero(h, len);
//	system("pause");
//	return 0;
//}