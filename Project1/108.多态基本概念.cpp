//#include<iostream>
//using namespace std;
//
////��̬
////����������
//class Animal
//{
//public:
//	//�����Ա������Ϊ�麯��
//	virtual void speak()
//	{
//		cout << "�����ڹ���" << endl;
//	}
//};
//
////����è��
//class Cat : public Animal{
//public:
//	void speak()
//	{
//		cout << "è�ڹ���" << endl;
//	}
//};
//
////��������
//class Dog : public Animal {
//public:
//	void speak()
//	{
//		cout << "С���ڽ�" << endl;
//	}
//};
//
////˵��ִ�к���
////��ַ���,�ڱ���׶�ȷ��������ַ
////Ҫ�ú�����������ĺ�����Ա,��Ҫ��ַ���,�ڳ�������ʱ�Ž��а�,�ڸ���ĺ�����Ա�ϼ���virtual
//
///**��̬��̬��������:**
//
//1. �м̳й�ϵ
//2. ������д����ĵ��麯��
//
//
//
//* *��̬��̬��ʹ�� * *
//
//�����ָ�������, ָ���������*/
//void doSpeak(Animal& animal) {
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "sizeof(Animal) = " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}