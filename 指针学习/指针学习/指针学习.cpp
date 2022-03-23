#include<iostream>
using namespace std;

int main()
{
	//1.定义指针
	int a = 10;
	//指针定义的语法：数据类型*指针变量名；
	int* p ;
	//让指针记录变量a的地址
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为" << p << endl;


	//2.使用指针
	//可以通过解引用的方式来找到指针指向的内存，可以访问+修改
	//* 指针变量名 = 找到指针指向的内存中的数据
	*p = 1000;
	cout << "a为：" << a << endl;
	cout << "*p为：" << *p << endl;
 
	cout << "————————" << endl;
	//3.指针占用的内存空间
	cout << *p << endl;
	cout << "sizeof(int*)=" << sizeof(int*) << endl;
	cout << "sizeof(int*)=" << sizeof(p) << endl;
	cout << "sizeof(float*)=" << sizeof(float*) << endl;
	cout << "sizeof(double*)=" << sizeof(double*) << endl;
	cout << "sizeof(char*)=" << sizeof(char*) << endl;
	//结论：在32位操作系统下，指针是占4个字节空间大小，不管是什么数据类型
	//在64为操作系统下，指针是占有8个字节空间大小，不管是什么数据类型

	//空指针
	//1.空指针用于给指针变量进行初始化
	int* p = NULL;
	
	//2.空指针是不可以进行访问的；
	//0-255之间的内存编号是系统占用的

	system("pause");
	return 0;
}