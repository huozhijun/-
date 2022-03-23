#include<iostream>
using namespace std;
class Date
{
private:

	int year, month, day;//数据成员

public:
	Date()
	{
		year = 0;
		month = 0;
		day = 0;

	}

	Date(int y, int m, int d)//=0是为了解决创建无参变量的问题
	{
		year = y;
		month = m;
		day = d;
		cout << "构造函数" << endl;
	}
	//构造函数
	//构造函数跟类名一样,前无类型，可以重载，实现数据成员初始化

	Date(const Date& t)
	{
		year = t.year;
		month = t.month;
		day = t.day;
		cout << "拷贝 构造函数" << endl;
	}

	~Date()
	{
		cout << "析构函数" << endl;
	}//撤销对象自动调用析构函数

	void show()//普通成员函数
	{
		cout << year << "\t" << month << "\t" << day << endl;
	}
};

class person
{
	string name;
	int age;
	char gender;
	Date date;//一个类的对象作为另一个类的成员 = 对象成员
public:
	person(string n, int a, char g, int y, int m, int d) :date(y, m, d)//用的是左边的三个参数
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