//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//使用for循环实现敲桌子案例
//	//案例描述:从1开始到数字100,如果数字个位数含有7,或者10位含有7,或者该数字是7的倍数
//	//我们就打印敲桌子,其余数字直接打印输出
//
//	for (int i = 1; i < 101; i++) {
//		if (i % 10 == 7 || i / 10 % 10 == 7 || i % 7 == 0) {
//			cout << "敲桌子" << endl;
//		}
//		else {
//			cout << i << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}