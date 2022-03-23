#include"swap.h"
#include<iostream>
using namespace std;

//4.在源文件中写函数的定义
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}