//#include<iostream>
//using namespace std;
//
////������
//class Animal
//{
//public:
//	int	m_A;
//};
//
////������̳�,������μ̳е�����
//// �̳�֮ǰ�ӹؼ��� virtual
//// Animal���Ϊ �����
//
////����
//class Sheep : virtual public Animal{};
//
////����
//class Tuo : virtual public Animal{};
//
////������
//class SheepTuo : public Sheep, public Tuo {
//
//};
//
//void test01()
//{
//	SheepTuo st;
//
//	//���ռ̳��������,�ڸ����Ը�ֵ��ʱ�����ֶ�����,��֪���Ǹ�������仹���յ����丳ֵ
//	//���Ҫ����������
//	st.Sheep::m_A = 20;
//	st.Tuo::m_A = 18;
//
//
//	//�����μ̳�,��������ӵ����ͬ������,Ҫ�����������������
//	
//	//ʹ����̳�֮��,m_A��ֵֻ��һ��
//	cout << "st.Sheep::m_A = " << st.Sheep::m_A << endl;
//	cout << "st.Tuo::m_A = " << st.Tuo::m_A << endl;
//
//	//ʹ����̳�֮��,���Բ�ʹ����������з���
//	cout << "st.m_A = " << st.m_A << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}