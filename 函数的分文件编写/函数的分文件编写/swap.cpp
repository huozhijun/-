#include"swap.h"
#include<iostream>
using namespace std;

//4.��Դ�ļ���д�����Ķ���
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}