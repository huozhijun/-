#include<iostream>
using namespace std;

//ͷ�ļ������ڱ���ļ�������Ȼ������˲���
#include"swap.h"


//�����ķ��ļ���д
//ʵ���������ֽ����ĺ���

void swap(int a, int b);

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}

//1.������׺����Ϊ.h��ͷ�ļ�
//2.������׺��Ϊ.cpp��Դ�ļ�
//3.��ͷ�ļ���д����������
//4.��Դ�ļ���д�����Ķ���


int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	system("pause");
	return 0;
}
