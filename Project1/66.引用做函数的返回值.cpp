//#include<iostream>
//using namespace std;
//
////�����������ķ���ֵ
////��Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
////�����ĵ��ÿ�����Ϊ��ֵ
//int& test02()
//{
//	static int a = 10; //��̬�ֲ�����,�ᱣ����ϵͳ����ִ�н�����Ż��ͷ�,���Կ��Ա���Ϊ���÷��س�ȥ
//	return a;
//}
//
//int main()
//{
//	int& ref = test01();
//	cout << "ref=" << ref << endl; //���ؽ������,��Ϊ������Ϊ�ֲ������ķ���ֵʱ��,����֮��ᱻϵͳ�ͷ��ڴ�
//	
//	int& ref02 = test02();
//	cout << "ref02=" << ref02 << endl;
//	cout << "ref02=" << ref02 << endl;
//	test02() = 1000;//��Ϊ����test02���ص���a������,�൱�����¸�a��ֵ,�����ref02���Ϊ1000
//	cout << "����test02() = 1000��,ref02=" << ref02 << endl;
//	cout << "����test02() = 1000��,ref02=" << ref02 << endl;
//	system("pause");
//	return 0;
//}