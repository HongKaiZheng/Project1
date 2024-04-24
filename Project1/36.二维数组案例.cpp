//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string arr[4][4] = {
//		{"   ","语文","数学","英语"},
//		{"张三","100","100","100"},
//		{"李四","90","50","100"},
//		{"王五","60","70","80"}
//	};
//	int scores[3][3] = {
//		{100,100,100},
//		{90,50,100},
//		{60,70,80}
//	};
//
//	string names[3] = {"张三","李四","王五"};
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << arr[i][j] << "  ";
//		}
//		cout << endl;
//	};
//
//	cout << endl;
//
//	for (int i = 0; i < 3; i++) {
//		int sum = 0;
//		for (int j = 0; j < 3; j++) {
//			sum += scores[i][j];
//		}
//		cout << names[i] << "的总分数是:" << sum << "分" << endl;
//	};
//	system("pause");
//	return 0;
//}