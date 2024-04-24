//#include<iostream>
//using namespace std;
//#include<ctime>
//
//int main()
//{
//	//添加随机数种子 作用利用当前系统时间生成随机数,防止每次随机数都一样
//	srand((unsigned int)time(NULL));
//	//1.系统随机生成1-100的随机数
//	int num = rand() % 100+1;
//	int sorce = 0, fraction = 0;		//sorce用来存储用户输入的数据;fraction用来统计猜的次数
//	cout << "请在0-100中随机猜一个数字" << endl;
//	while (sorce=num)
//	{
//		cin >> sorce;
//		fraction++;
//		if (sorce > num) {
//			cout << "你猜的数字大了" << endl;
//		}
//		else if (sorce < num) {
//			cout << "你猜的数字小了" << endl;
//		}
//		else {
//			cout << "恭喜你猜对了" << endl;
//			cout << "你一共猜了:" << fraction << "次" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}