#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Student                               //����ѧ���� 
{
public:        // �ⲿ�ӿڣ����г�Ա���� 
	Student() //���ù��캯��
	{
		strcpy(number, "000");
		strcpy(name, "xxxxxx");
		age = 0;
	}

	void set(char num[4], char n[10], int a);

	void show();


private:                                    //˽�����ݳ�Ա 
	char number[4];

	char name[10];

	int age;
};


void Student::set(char num[4], char n[10], int a)//ȡֵ
{
	if (num != NULL)strcpy(number, num);
	else cout << "��������" << endl;

	if (n != NULL)strcpy(name, n);
	else cout << "��������" << endl;

	if (a > 0)age = a;
	else cout << "��������" << endl;
}


void Student::show()//��ӡ
{
	cout << "number:" << number << endl;
	cout << "name:" << name << endl << "age:";
	cout << age << endl;
}


int main()
{
	Student student1;//����
	Student student2;

	student1.set("001", "С��", 20);		//ȡֵ
	student2.set("002", "С��", 20);

	student1.show();//��ӡ
	student2.show();

	system("pause");

	return 0;
}

