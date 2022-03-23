#include<iostream>
#include"指针和数组.h"
using namespace std;

int main()
{
	//1.const修饰指针，常量指针
	int a = 10;
	int b = 10;
	const int * p = &a;
	//指针指向的值不可以修改，指针的指向可以修改
	p = &b;

	//2.const修饰常量 指针常量
	//指针的指向不可以修改，指针指向的值可以改
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b 错误 离谁近水不能改

	//3.const修饰指针和常量
	const int* const p3 = &a;
	//这样两个值都不可以修改

	system("pause");
	return 0;
}