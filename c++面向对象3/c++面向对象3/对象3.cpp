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

class person
{
	string name;
	int age;
	char gender;
	Date date;//һ����Ķ�����Ϊ��һ����ĳ�Ա = �����Ա
public:
	person(string n, int a, char g, int y, int m, int d) :date(y, m, d)//�õ�����ߵ���������
	{
		name = n;
		age = a;
		gender = g;
	}
	void show()
	{
		cout << name << "\t" << age << "\t" << gender << endl;
		date.show();
	}

};

int main()
{
	
	person p("simon", 12, 'M', 2012, 1, 1);
	p.show();
	system("pause");
	return 0;
}