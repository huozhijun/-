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

int main()
{
	Date d1(2022, 3, 22);
	Date* p = &d1;
	//对象指针 Date类型的指针
	//指针不创建对象

	//三种等价形式
	d1.show();
	p->show();
	(*p).show();

	Date q[3] = { Date(1,1,1),Date(2,2,2),Date() };
	//分别的序号是0，1，2
	//撤销对象是倒着撤销的，是q2到q1到q0再回到d1
	//创建3个对象
	q[2].show();

	//引用是另外一个变量的别名
	Date & w = d1;
	//引用不创建对象，不会再开辟空间是d1的别名
	w.show();//往后w就是d1的意思

	Date* qq = new Date(1999, 12, 17);//动态的调用对象
	//new要创建对象
	qq->show();
	delete qq;//new来的一定delete


	system("pause");
	return 0;
}