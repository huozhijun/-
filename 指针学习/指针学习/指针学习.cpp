#include<iostream>
using namespace std;

int main()
{
	//1.����ָ��
	int a = 10;
	//ָ�붨����﷨����������*ָ���������
	int* p ;
	//��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ" << p << endl;


	//2.ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ棬���Է���+�޸�
	//* ָ������� = �ҵ�ָ��ָ����ڴ��е�����
	*p = 1000;
	cout << "aΪ��" << a << endl;
	cout << "*pΪ��" << *p << endl;
 
	cout << "����������������" << endl;
	//3.ָ��ռ�õ��ڴ�ռ�
	cout << *p << endl;
	cout << "sizeof(int*)=" << sizeof(int*) << endl;
	cout << "sizeof(int*)=" << sizeof(p) << endl;
	cout << "sizeof(float*)=" << sizeof(float*) << endl;
	cout << "sizeof(double*)=" << sizeof(double*) << endl;
	cout << "sizeof(char*)=" << sizeof(char*) << endl;
	//���ۣ���32λ����ϵͳ�£�ָ����ռ4���ֽڿռ��С��������ʲô��������
	//��64Ϊ����ϵͳ�£�ָ����ռ��8���ֽڿռ��С��������ʲô��������

	//��ָ��
	//1.��ָ�����ڸ�ָ��������г�ʼ��
	int* p = NULL;
	
	//2.��ָ���ǲ����Խ��з��ʵģ�
	//0-255֮����ڴ�����ϵͳռ�õ�

	system("pause");
	return 0;
}