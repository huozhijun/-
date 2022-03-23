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
		cout << "我在这！" << endl;
		cin >>year;
		cin >> month;
		cin >> day;
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

int main()
{
	Date d1(2022,3,22);
	//cout << d.year << endl;//year是私有的，通过对象不能访问私有成员
	//可以通过show函数来显示它具体是多少

	d1.show();//此时不能再使用cout

	//Data d2 = d1;//此时通过已知函数构造未知函数会自动调用拷贝构造函数
	Date d2;//若我啥参数没传，上面相应的改，调用不带参数的构造函数
	//d2 = d1;//此时没有拷贝构造函数，用的是等号运算性质
	d2.show();

	system("pause");
	return 0;
}