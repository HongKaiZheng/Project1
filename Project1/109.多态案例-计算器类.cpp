//#include<iostream>
//using namespace std;
//
////使用普通办法实现计算器功能
//class Calculator
//{
//public:
//	int calculate(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1* m_Num2;
//		}
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
//void test01()
//{
//	Calculator c;
//	c.m_Num1 = 100;
//	c.m_Num2 = 100;
//	cout << c.m_Num1 << "+" << c.m_Num2 <<"=" << c.calculate("+") << endl;
//}
//
////使用多态进行生成计算器类
//class Abstract
//{
//public:
//	virtual int getNum()
//	{
//		return 0;
//	}
//	int num1;
//	int num2;
//};
//
////创建加类子类
//class Addition : public Abstract
//{
//public:
//	int getNum()
//	{
//		return num1 + num2;
//	}
//};
//
////创建减类子类
//class Subtraction : public Abstract
//{
//public:
//	int getNum()
//	{
//		return num1 - num2;
//	}
//};
//
////创建乘法类子类
//class Multiplication : public Abstract
//{
//public:
//	int getNum()
//	{
//		return num1 + num2;
//	}
//};
//
////测试多态生成的计算器
//void test02()
//{
//	//测试加法
//	//多态的使用办法
//	//父类的指针或引用,指向子类对象
//	Abstract* abc = new Addition;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "+" << abc->num2 << "=" << abc->getNum() << endl;
//
//	//用完记得销毁,释放堆区数据
//	delete abc;
//
//	//测试减法
//	abc = new Subtraction;
//	abc->num1 = 20;
//	abc->num2 = 20;
//	cout << abc->num1 << "-" << abc->num2 << "=" << abc->getNum() << endl;
//	delete abc;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}