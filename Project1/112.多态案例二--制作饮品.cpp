//#include<iostream>
//using namespace std;
////��Ʒ�������� ��ˮ - ���� - ���뱭�� - ���븨��
//
//class Drinks
//{
//public:
//	//��ˮ
//	virtual void Boilwater() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void Into() = 0;
//	//���븨��
//	virtual void Accessories() = 0;
//
//	//�������Ĳ���������
//	void conformity()
//	{
//		Boilwater();
//		Brew();
//		Into();
//		Accessories();
//	}
//};
//
////��������
//class Tea : public Drinks
//{
//public:
//	void Boilwater()
//	{
//		cout << "�Ƚ�����ˮ" << endl;
//	}
//	void Brew()
//	{
//		cout << "�Բ�Ҷ���г���" << endl;
//	}
//	void Into()
//	{
//		cout << "�Ѳ�ˮ��������" << endl;
//	}
//	void Accessories()
//	{
//		cout << "��������Ƭ" << endl;
//	}
//};
//
////����������
//class Coffee : public Drinks
//{
//public:
//	void Boilwater()
//	{
//		cout << "�Ƚ�����ˮ" << endl;
//	}
//	void Brew()
//	{
//		cout << "�Կ��Ƚ��г���" << endl;
//	}
//	void Into()
//	{
//		cout << "�ѿ��ȵ�������" << endl;
//	}
//	void Accessories()
//	{
//		cout << "�������" << endl;
//	}
//};
//
////��������
//void doWork(Drinks* drinks) // Drinks* drinks = (��������new ����)
//{
//	drinks->conformity();
//	//�ͷŶ����ڴ�ռ�
//	delete drinks;
//}
//
//void test01()
//{
//	cout << "�ݲ貽��Ϊ:" << endl;
//	doWork(new Tea);
//	cout << "------------" << endl;
//	cout << "���ݿ��Ȳ���:" << endl;
//	doWork(new Coffee);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}