#include<iostream>
#include"ָ�������.h"
using namespace std;

int main()
{
	//1.const����ָ�룬����ָ��
	int a = 10;
	int b = 10;
	const int * p = &a;
	//ָ��ָ���ֵ�������޸ģ�ָ���ָ������޸�
	p = &b;

	//2.const���γ��� ָ�볣��
	//ָ���ָ�򲻿����޸ģ�ָ��ָ���ֵ���Ը�
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b ���� ��˭��ˮ���ܸ�

	//3.const����ָ��ͳ���
	const int* const p3 = &a;
	//��������ֵ���������޸�

	system("pause");
	return 0;
}