#include<iostream>
using namespace std;
#define Day 7
//上面定义过的下面不可以修改 不然造成Bug
//常量：作用是用于记录程序中不可更改的数据
//宏常量： #define 常量名 常量值
//const修饰的变量 const 数据类型 常量名 = 常量值


//1.单行注释
//2.多行注释

/*
两个中间所有内容都是注释
main()程序入口 有且只有一个 
*/

int main()
{
	//变量创建的语法：数据类型 变量名称 = 变量初始值
	//给一段指定的内存空间取值，方便操作这段内存

	int a = 10;

	const int month = 12;//const修饰的变量也为厂里
	cout << "一年有" << month << "个月份" << endl;
	
	cout << "a = " << a << endl;

	cout << "一周总共有：" << Day << "天" << endl;

	cout << "hello world" << endl;//是endL 小写的l 不是123的1！！

	cout << "short类型所占的内存空间为：" << sizeof(short) << endl;

	cout << "int类型所占的内存空间为：" << sizeof(int) << endl;

	cout << "float类型所占的内存空间为：" << sizeof(float) << endl;
	
	float f1 = 3.14f;//如果直接写3.14 默认是double在转换成float 会多做一步转换 所以加f 是float的f

	//默认情况下输出一个小数显示6位有效数字

	float f2 = 3.1415926f;

	cout << "f2 = " << f2 << endl;

	double d1 = 3.1415926;

	cout << "d2 = " << d1 << endl;
	
	//科学计数法
	float f3 = 3e2;//3*10^2 带正数是10的n次方
	
	float f4 = 3e-2;//3*0.1^2 带负数是0.1的n次方




	system("pause");

	return 0;
}
 
//标识符的命名规则
//1.标识符不能是关键字
//2.标识符只能由字母、数字和下划线组成
//3.第一个字符必须为字母或下划线
//4.标识符中字母区分大小写

