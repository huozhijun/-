#include<iostream>
using namespace std;

//回文是指正读反读均相同的字符序列，如“abba”和“abdba”均是回文，但“good”不是回文。试写一个程序
//判定给定的字符向量是否为回文。

bool huiwen(string a)
{
	int temp = sizeof(a) / sizeof(char);
	//计算字符串有几个
	char b[] = a;
	//把字符串放在数组里
	for (int i = 0; i < floor(temp / 2); i++)//中间的不判断 不管
	{
		if (b[i] == b[temp-1])
		//如果第一个跟最后一个一样 对 第二个跟倒数第二个一样 对
		{
			temp--;
		}
		else
			return false;
	}
}

int main()
{
	string a;
	cout << "输入你的字符串" << endl;
	cin >> a;
	huiwen(a);

	system("pause");
	return 0;
}


