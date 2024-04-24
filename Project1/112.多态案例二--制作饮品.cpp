//#include<iostream>
//using namespace std;
////饮品制作流程 煮水 - 冲泡 - 倒入杯中 - 加入辅料
//
//class Drinks
//{
//public:
//	//煮水
//	virtual void Boilwater() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void Into() = 0;
//	//加入辅料
//	virtual void Accessories() = 0;
//
//	//把以上四步进行整合
//	void conformity()
//	{
//		Boilwater();
//		Brew();
//		Into();
//		Accessories();
//	}
//};
//
////制作茶类
//class Tea : public Drinks
//{
//public:
//	void Boilwater()
//	{
//		cout << "先进行煮水" << endl;
//	}
//	void Brew()
//	{
//		cout << "对茶叶进行冲泡" << endl;
//	}
//	void Into()
//	{
//		cout << "把茶水倒进杯中" << endl;
//	}
//	void Accessories()
//	{
//		cout << "放入柠檬片" << endl;
//	}
//};
//
////制作咖啡类
//class Coffee : public Drinks
//{
//public:
//	void Boilwater()
//	{
//		cout << "先进行煮水" << endl;
//	}
//	void Brew()
//	{
//		cout << "对咖啡进行冲泡" << endl;
//	}
//	void Into()
//	{
//		cout << "把咖啡倒进杯中" << endl;
//	}
//	void Accessories()
//	{
//		cout << "加入白糖" << endl;
//	}
//};
//
////制作函数
//void doWork(Drinks* drinks) // Drinks* drinks = (传进来的new 对象)
//{
//	drinks->conformity();
//	//释放堆区内存空间
//	delete drinks;
//}
//
//void test01()
//{
//	cout << "泡茶步骤为:" << endl;
//	doWork(new Tea);
//	cout << "------------" << endl;
//	cout << "冲泡咖啡步骤:" << endl;
//	doWork(new Coffee);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}