#include<iostream>
using namespace std;
class Date
{
private:

	int year, month, day;//���ݳ�Ա

public:
	Date()
	{
		year = 0;
		month = 0;
		day = 0;
		cout << "�����⣡" << endl;
		cin >>year;
		cin >> month;
		cin >> day;
	}

	Date(int y, int m, int d)//=0��Ϊ�˽�������޲α���������
	{
		year = y;
		month = m;
		day = d;
		cout << "���캯��" << endl;
	}
	//���캯��
	//���캯��������һ��,ǰ�����ͣ��������أ�ʵ�����ݳ�Ա��ʼ��

	Date(const Date& t)
	{
		year = t.year;
		month = t.month;
		day = t.day;
		cout << "���� ���캯��" << endl;
	}

	~Date()
	{
		cout << "��������" << endl;
	}//���������Զ�������������

	void show()//��ͨ��Ա����
	{
		cout << year << "\t" << month << "\t" << day << endl;
	}
};

int main()
{
	Date d1(2022,3,22);
	//cout << d.year << endl;//year��˽�еģ�ͨ�������ܷ���˽�г�Ա
	//����ͨ��show��������ʾ�������Ƕ���

	d1.show();//��ʱ������ʹ��cout

	//Data d2 = d1;//��ʱͨ����֪��������δ֪�������Զ����ÿ������캯��
	Date d2;//����ɶ����û����������Ӧ�ĸģ����ò��������Ĺ��캯��
	//d2 = d1;//��ʱû�п������캯�����õ��ǵȺ���������
	d2.show();

	system("pause");
	return 0;
}