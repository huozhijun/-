#include<iostream>
using namespace std;
#include<string>

//int arr[10] = {1,2,3,4,5,6,7,8,9,10};\

//1.创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型的集合
struct Student
{
	//成员列表

	//姓名
	string name;
	//年龄
	int age;
	//考试分数
	int score;
};
//2.通过学生类型创建出具体的学生

//2.1 struct Student s1
//2.2 struct Student s2={...}
//2.3 在定义结构体时顺便创建结构体变量

int main()
{
	//2.1 struct Student s1
	struct Student s1;
	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 10;

	cout << "姓名" << s1.name << "年龄：" << s1.age << "分数" << s1.score << endl;

    //2.2 struct Student s2={...}
    //2.3 在定义结构体时顺便创建结构体变量

}