#include<iostream>
using namespace std;


int add(int num1, int num2)//num1,num2�β�
{
	int sum = num1 + num2;
	return sum;

}

//ֵ����
//���庯����ʵ���������ֽ��н���

//�������������Ҫ����ֵ�������Ķ������дvoid
//�в��з���������
void swap(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	return;//����ֵ����Ҫ��ʱ�򣬿��Բ�дreturn
}


//����������ʽ
//1.�޲��޷�
void test01()
{
	cout << "this is test01" << endl;
}
//2.�в��޷�
void test02(int a)
{
	cout << "this is test02 a = " << a << endl;
	//�޷� ����Ҫ�κη���ֵ = ����Ҫreturn
}

//3.�޲��з�
int test03()
{
	cout << "this is test03" << endl;
	return 1000;
}

//3.7��������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

//��������������ʾ����������ڣ������Ϳ��԰Ѻ�������д��main��������
int max(int a, int b);
//�����Ķ��壬�Ǳ���
//������������д��Σ����Ƕ���ֻ��һ�Ρ�
int max(int a, int b)
{
	return a > b ? a : b;//��Ŀ�������a��b�󷵻�a,a��bС����b
}

int main()
{
	int a = 10;//a,bʵ��
	int b = 20;
	swap(a, b);
	//����test01
	test01();
	//
	test02(100);
	//�޲��з���������
	int numba = test03();
	//�з���ֵ����һ��ֵ����һ��

	//���ñȽϺ���
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}
