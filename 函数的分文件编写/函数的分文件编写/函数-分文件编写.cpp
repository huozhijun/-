#include<iostream>
using namespace std;

//头文件包含在别的文件夹里面然后进行了操作
#include"swap.h"


//函数的分文件编写
//实现两个数字交换的函数

void swap(int a, int b);

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}

//1.创建后缀名称为.h的头文件
//2.创建后缀名为.cpp的源文件
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义


int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	system("pause");
	return 0;
}
