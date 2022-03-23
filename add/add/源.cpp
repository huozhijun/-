#include<iostream>
using namespace std;


int add(int num1, int num2)//num1,num2形参
{
	int sum = num1 + num2;
	return sum;

}

//值传递
//定义函数，实现两个数字进行交换

//如果函数并不需要返回值，声明的对象可以写void
//有参有返函数例子
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	return;//返回值不需要的时候，可以不写return
}


//函数常见形式
//1.无参无返
void test01()
{
	cout << "this is test01" << endl;
}
//2.有参无返
void test02(int a)
{
	cout << "this is test02 a = " << a << endl;
	//无返 不需要任何返回值 = 不需要return
}

//3.无参有返
int test03()
{
	cout << "this is test03" << endl;
	return 1000;
}

//3.7函数声明
//比较函数，实现两个整型数字进行比较，返回较大的值

//函数的声明，表示这个函数存在，这样就可以把函数本体写在main函数后面
int max(int a, int b);
//函数的定义，是本体
//函数声明可以写多次，但是定义只有一次。
int max(int a, int b)
{
	return a > b ? a : b;//三目运算符，a比b大返回a,a比b小返回b
}

int main()
{
	int a = 10;//a,b实参
	int b = 20;
	swap(a, b);
	//调用test01
	test01();
	//
	test02(100);
	//无参有返参数调用
	int numba = test03();
	//有返回值，拿一个值来接一下

	//调用比较函数
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}
