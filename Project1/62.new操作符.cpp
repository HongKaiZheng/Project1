//#include<iostream>
//using namespace std;
//
//
////ʹ��new�������ڶ��������ڴ�ռ�
//int* func()
//{
//	//new�Ƿ��ظ��������͵�ָ��
//	int * p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int *p = func();
//	//�ڶ��������ݲ��ᱻ�ͷ�
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	
//	//�ֶ��ͷŶ�������,ʹ��delete�ؼ���
//	delete p;
//	cout << *p << endl; //���е��˴���ʱ�����ᱨ��,��Ϊ���������Ѿ��ֶ��ͷ�,�޷��ٽ����ͷ�
//}
////���ùؼ���new�ڶ�����������
//void test02()
//{
//	//�ڶ�����������
//	int * arr = new int[10];//10����������10��Ԫ��
//	//�����鸳ֵ
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;//�����鸳ֵ100~109;
//	}
//	//��ӡ���Ƿ�ֵ�ɹ�
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//
//	//�ͷŶ�������,���ͷ������ʱ��Ҫ��������[];
//	delete[] arr;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}