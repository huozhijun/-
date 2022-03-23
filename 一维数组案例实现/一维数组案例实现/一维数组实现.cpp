#include<iostream>
using namespace std;

int add(int num1, int num2) 
{
	int sum = num1 + num2;
	return sum;

}

int main()
{
	//在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
	//找出并且打印最重的小猪体重。

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

	cout << "最重的小猪体重 = " << max << endl;
	cout << "-------------------------------- "  << endl;

	//数组元素逆置
	//请声明一个5个元素的数组，并且将元素逆置

	int b[5] = { 1,2,3,4,5 };
	int c=0,d=0;
	for (i = 0; i <= 4; i++)
	{
		c = b[i];
		cout << "原数组为" << c << endl;
	}

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//最后的下标等于总长度-1
	for(start = 0;start<=4;start++)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		cout << "转置数组为" << arr[start] << endl;
	
	}
	//实现加法函，传入两个整型数据相加，并且返回


	system("pause");

	return 0;
}