//#include<iostream>
//using namespace std;
//
//class CPU
//{
//public:
//	//抽象计算函数
//	virtual void calculate() = 0;
//};
//class VideoCard
//{
//public:
//	//抽象显示函数
//	virtual void display() = 0;
//};
//class Memory
//{
//public:
//	//抽象存储类
//	virtual void storage() = 0;
//};
//
////电脑类
//class Computer
//{
//public:
//	//指针指向成员属性
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	//提供工作函数
//	void work()
//	{
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//	//提供析构函数,释放电脑零件
//	~Computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//	}
//private:
//	CPU* m_cpu; //cpu零件指针
//	VideoCard* m_vc; //显卡零件指针
//	Memory* m_mem; // 内存条零件指针
//
//};
//
////具体零件厂商
//
////Intel的
//class IntelCpu : public CPU
//{
//	void calculate() {
//		cout << "Intel的CPU开始计算了" << endl;
//	}
//};
//
//class IntelVideoCard : public VideoCard
//{
//	void display() {
//		cout << "Intel的显卡开始画图了" << endl;
//	}
//};
//
//class IntelMemory : public Memory
//{
//	void storage() {
//		cout << "Intel的内存开始写入数据了" << endl;
//	}
//};
//
//
////联想的
//class LenovoCpu : public CPU
//{
//	void calculate() {
//		cout << "联想的CPU开始计算了" << endl;
//	}
//};
//
//class LenovoVideoCard : public VideoCard
//{
//	void display() {
//		cout << "联想的显卡开始画图了" << endl;
//	}
//};
//
//class LenovoMemory : public Memory
//{
//	void storage() {
//		cout << "联想的内存开始写入数据了" << endl;
//	}
//};
//
////组装电脑
//void test01()
//{
//	//创建第一台电脑的组件
//	CPU* intelCpu = new IntelCpu;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* lenovoMemory = new LenovoMemory;
//	//调用函数工作接口函数
//	Computer* computer1 = new Computer(intelCpu,intelCard,lenovoMemory);
//	computer1->work();
//	delete computer1;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}