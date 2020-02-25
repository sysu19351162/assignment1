#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Student                               //定义学生类 
{
public:        // 外部接口，公有成员函数 
	Student() //设置构造函数
	{
		strcpy(number, "000");
		strcpy(name, "xxxxxx");
		age = 0;
	}

	void set(char num[4], char n[10], int a);

	void show();


private:                                    //私有数据成员 
	char number[4];

	char name[10];

	int age;
};


void Student::set(char num[4], char n[10], int a)//取值
{
	if (num != NULL)strcpy(number, num);
	else cout << "输入有误" << endl;

	if (n != NULL)strcpy(name, n);
	else cout << "输入有误" << endl;

	if (a > 0)age = a;
	else cout << "输入有误" << endl;
}


void Student::show()//打印
{
	cout << "number:" << number << endl;
	cout << "name:" << name << endl << "age:";
	cout << age << endl;
}


int main()
{
	Student student1;//构造
	Student student2;

	student1.set("001", "小明", 20);		//取值
	student2.set("002", "小红", 20);

	student1.show();//打印
	student2.show();

	system("pause");

	return 0;
}

