//#include<iostream>
//using namespace std;
//
////ʹ����ͨ�취ʵ�ּ���������
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
////ʹ�ö�̬�������ɼ�������
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
////������������
//class Addition : public Abstract
//{
//public:
//	int getNum()
//	{
//		return num1 + num2;
//	}
//};
//
////������������
//class Subtraction : public Abstract
//{
//public:
//	int getNum()
//	{
//		return num1 - num2;
//	}
//};
//
////�����˷�������
//class Multiplication : public Abstract
//{
//public:
//	int getNum()
//	{
//		return num1 + num2;
//	}
//};
//
////���Զ�̬���ɵļ�����
//void test02()
//{
//	//���Լӷ�
//	//��̬��ʹ�ð취
//	//�����ָ�������,ָ���������
//	Abstract* abc = new Addition;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "+" << abc->num2 << "=" << abc->getNum() << endl;
//
//	//����ǵ�����,�ͷŶ�������
//	delete abc;
//
//	//���Լ���
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