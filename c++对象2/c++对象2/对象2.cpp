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
	Date d1(2022, 3, 22);
	Date* p = &d1;
	//����ָ�� Date���͵�ָ��
	//ָ�벻��������

	//���ֵȼ���ʽ
	d1.show();
	p->show();
	(*p).show();

	Date q[3] = { Date(1,1,1),Date(2,2,2),Date() };
	//�ֱ�������0��1��2
	//���������ǵ��ų����ģ���q2��q1��q0�ٻص�d1
	//����3������
	q[2].show();

	//����������һ�������ı���
	Date & w = d1;
	//���ò��������󣬲����ٿ��ٿռ���d1�ı���
	w.show();//����w����d1����˼

	Date* qq = new Date(1999, 12, 17);//��̬�ĵ��ö���
	//newҪ��������
	qq->show();
	delete qq;//new����һ��delete


	system("pause");
	return 0;
}