#include<iostream>
using namespace std;

int add(int num1, int num2) 
{
	int sum = num1 + num2;
	return sum;

}

int main()
{
	//��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};
	//�ҳ����Ҵ�ӡ���ص�С�����ء�

	int arr[5] = { 300,350,200,400,250 };

	int i = 0;

	int max = 0;

	for (i = 0; i <= 4; i++) 
	{
		 
		if ( arr[i] > max )
		{
			max = arr[i];
		}
	}

	cout << "���ص�С������ = " << max << endl;
	cout << "-------------------------------- "  << endl;

	//����Ԫ������
	//������һ��5��Ԫ�ص����飬���ҽ�Ԫ������

	int b[5] = { 1,2,3,4,5 };
	int c=0,d=0;
	for (i = 0; i <= 4; i++)
	{
		c = b[i];
		cout << "ԭ����Ϊ" << c << endl;
	}

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//�����±�����ܳ���-1
	for(start = 0;start<=4;start++)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		cout << "ת������Ϊ" << arr[start] << endl;
	
	}
	//ʵ�ּӷ�����������������������ӣ����ҷ���


	system("pause");

	return 0;
}