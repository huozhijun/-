#include<iostream>
using namespace std;
#include<string>

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
};
//2.ͨ��ѧ�����ʹ����������ѧ��

//2.1 struct Student s1
//2.2 struct Student s2={...}
//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

int main()
{
	//2.1 struct Student s1
	struct Student s1;
	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 10;

	cout << "����" << s1.name << "���䣺" << s1.age << "����" << s1.score << endl;

    //2.2 struct Student s2={...}
    //2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

}