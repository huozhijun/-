#include<iostream>
using namespace std;
#include<string>
//Ϊ�������ܹ�ʹ��s1.name������ӡ

//int arr[10] = {1,2,3,4,5,6,7,8,9,10};\

//1.����ѧ���������ͣ�ѧ�����������������䣬������
//�Զ����������ͣ�һЩ���͵ļ���
struct Student
{
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//���Է���
	int score;
} s3;//2.3 ˳�㴴���ṹ�����
//2.ͨ��ѧ�����ʹ����������ѧ��

//2.1 struct Student s1
//2.2 struct Student s2={...}
//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

int main()
{
	//2.1 struct Student s1
	//ͬʱstruct�ؼ��ֿ���ʡ��
	struct Student s1;
	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 10;

	cout << "����" << s1.name << "���䣺" << s1.age << "����" << s1.score << endl;

	//2.2 struct Student s2={...}
	struct Student s2 = { "����",19,80 };
	cout << "����" << s2.name << "���䣺" << s2.age << "����" << s2.score << endl;


	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

	s3.name = "С��";
	s3.age = 20;
	s3.score = 100;
	cout << "����" << s3.name << "���䣺" << s3.age << "����" << s3.score << endl;

	system("pause");
	return 0;


}