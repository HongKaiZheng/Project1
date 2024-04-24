//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//水仙花数指的是一个三位数的个位和十位和百位的三次幂之和等于这个数的本身,那么这个三位数即为水仙花数
//	//求三位数中所有的水仙花数
//	int num = 100;
//	do {
//		int a = num % 10, b = (num / 10) % 10, c = (num / 100);
//		if ( pow(a,3) + pow(b,3) + pow(c,3) == num) {
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	system("pause");
//	return 0;
//}