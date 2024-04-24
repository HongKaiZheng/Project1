//#include<iostream>
//using namespace std;
//
////动物类
//class Animal
//{
//public:
//	int	m_A;
//};
//
////利用虚继承,解决菱形继承的问题
//// 继承之前加关键字 virtual
//// Animal类称为 虚基类
//
////羊类
//class Sheep : virtual public Animal{};
//
////驼类
//class Tuo : virtual public Animal{};
//
////羊驼类
//class SheepTuo : public Sheep, public Tuo {
//
//};
//
//void test01()
//{
//	SheepTuo st;
//
//	//羊驼继承了羊和驼,在给属性赋值的时候会出现二义性,不知道是给羊的年龄还是驼的年龄赋值
//	//因此要加上作用域
//	st.Sheep::m_A = 20;
//	st.Tuo::m_A = 18;
//
//
//	//当菱形继承,两个父类拥有相同的数据,要加以作用域加以区分
//	
//	//使用虚继承之后,m_A的值只有一个
//	cout << "st.Sheep::m_A = " << st.Sheep::m_A << endl;
//	cout << "st.Tuo::m_A = " << st.Tuo::m_A << endl;
//
//	//使用虚继承之后,可以不使用作用域进行访问
//	cout << "st.m_A = " << st.m_A << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}