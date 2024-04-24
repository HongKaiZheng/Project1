//#include<iostream>
//using namespace std;
//
////建立立方体类
//class Cube
//{
//public:
//	//设置行为,获取到立方体的长宽高
//	void setCubeL(int setL)
//	{
//		m_L = setL;
//	}
//	int getCubeL(int getL)
//	{
//		return m_L;
//	}
//	void setCubeW(int setW)
//	{
//		m_W = setW;
//	}
//	int getCubeW(int getE)
//	{
//		return m_W;
//	}
//	void setCubeH(int setH)
//	{
//		m_H = setH;
//	}
//	int getCubeH(int getH)
//	{
//		return m_H;
//	}
//
//	//求立方体的面积
//	int Scube()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	//求立方体的体积
//	int Vcube()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//利用成员函数判断两个立方体是否相等
//	bool isSameByClass(Cube& c)
//	{
//		if (Scube() == c.Scube() && Vcube() == c.Vcube()) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//
//
//
//	//设置长宽高为私有的
//private:
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//};
////利用全局函数判断两个立方体是否相等
//bool isSame(Cube& C1, Cube& C2)
//{
//	if (C1.Scube() == C2.Scube() && C1.Vcube() == C2.Vcube()) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main()
//{
//	//创建实例化对象
//	Cube C1;
//	//赋值
//	C1.setCubeL(10);
//	C1.setCubeW(10);
//	C1.setCubeH(10);
//	cout << "立方体的面积是:" << C1.Scube() << endl;
//	cout << "立方体的体积是:" << C1.Vcube() << endl;
//
//	Cube C2;
//	C2.setCubeL(10);
//	C2.setCubeW(10);
//	C2.setCubeH(10);
//	//利用全局函数判断两个立方体是否相等
//	bool ret = isSame(C1, C2);
//	if (ret) {
//		cout << "C1和C2是相等的" << endl;
//	}
//	else {
//		cout << "C1和C2是不相等的" << endl;
//	}
//
//	//利用成员函数判断两个立方体是否相等
//	bool ref = C1.isSameByClass(C2);
//	if (ref) {
//		cout << "成员函数判断:C1和C2是相等的" << endl;
//	}
//	else {
//		cout << "成员函数判断:C1和C2是不相等的" << endl;
//	}
//	system("pause");
//	return 0;
//}