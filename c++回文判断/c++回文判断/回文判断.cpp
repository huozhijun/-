#include<iostream>
using namespace std;

//������ָ������������ͬ���ַ����У��硰abba���͡�abdba�����ǻ��ģ�����good�����ǻ��ġ���дһ������
//�ж��������ַ������Ƿ�Ϊ���ġ�

bool huiwen(string a)
{
	int temp = sizeof(a) / sizeof(char);
	//�����ַ����м���
	char b[] = a;
	//���ַ�������������
	for (int i = 0; i < floor(temp / 2); i++)//�м�Ĳ��ж� ����
	{
		if (b[i] == b[temp-1])
		//�����һ�������һ��һ�� �� �ڶ����������ڶ���һ�� ��
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
	cout << "��������ַ���" << endl;
	cin >> a;
	huiwen(a);

	system("pause");
	return 0;
}


