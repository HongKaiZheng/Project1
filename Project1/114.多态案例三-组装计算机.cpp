//#include<iostream>
//using namespace std;
//
//class CPU
//{
//public:
//	//������㺯��
//	virtual void calculate() = 0;
//};
//class VideoCard
//{
//public:
//	//������ʾ����
//	virtual void display() = 0;
//};
//class Memory
//{
//public:
//	//����洢��
//	virtual void storage() = 0;
//};
//
////������
//class Computer
//{
//public:
//	//ָ��ָ���Ա����
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	//�ṩ��������
//	void work()
//	{
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//	//�ṩ��������,�ͷŵ������
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
//	CPU* m_cpu; //cpu���ָ��
//	VideoCard* m_vc; //�Կ����ָ��
//	Memory* m_mem; // �ڴ������ָ��
//
//};
//
////�����������
//
////Intel��
//class IntelCpu : public CPU
//{
//	void calculate() {
//		cout << "Intel��CPU��ʼ������" << endl;
//	}
//};
//
//class IntelVideoCard : public VideoCard
//{
//	void display() {
//		cout << "Intel���Կ���ʼ��ͼ��" << endl;
//	}
//};
//
//class IntelMemory : public Memory
//{
//	void storage() {
//		cout << "Intel���ڴ濪ʼд��������" << endl;
//	}
//};
//
//
////�����
//class LenovoCpu : public CPU
//{
//	void calculate() {
//		cout << "�����CPU��ʼ������" << endl;
//	}
//};
//
//class LenovoVideoCard : public VideoCard
//{
//	void display() {
//		cout << "������Կ���ʼ��ͼ��" << endl;
//	}
//};
//
//class LenovoMemory : public Memory
//{
//	void storage() {
//		cout << "������ڴ濪ʼд��������" << endl;
//	}
//};
//
////��װ����
//void test01()
//{
//	//������һ̨���Ե����
//	CPU* intelCpu = new IntelCpu;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* lenovoMemory = new LenovoMemory;
//	//���ú��������ӿں���
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