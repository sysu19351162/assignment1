#include<iostream>
#include<stdlib.h>
 
using namespace std;

enum Month { Jan=1, Feb, Mar, Apr, May, June, July, Aug, Sept, Oct, Nov, Dec };//�·�ö��


class Timedate
{
public:
	Timedate()								//����
	{
		int year = 2010;
		Month month = Jan;
	};

	void set(int y, Month m, int d, int h, int min, int sec);								//����
	void show();							//��ӡ

private:
	Month month;
	int year, day;
	int hour, minute, second;

};


void Timedate::set(int y, Month m, int d, int h, int min, int sec)						//����
{

	if (y >= 2010 && y <= 2015)year = y;												//������
	else {
		cout << "����������" << endl;
		return;
	}

	month = m;																			//������

	if (month == Feb)																	//������
	{
		if (year == 2012)						//2012��Ϊ���꣬�����2����29��
			if (d > 0 && d <= 29)
				day = d;
			else cout << "���������" << endl;
		else
			if (d > 0 && d <= 28)
				day = d;
			else cout << "���������" << endl;
	}
	else
	{
		if (month == Jan || month == Mar || month == May || month == July || month == Aug || month == Oct || month == Dec)//1,3,5,7,8,10,12����31��
			if (d > 0 && d <= 31)
				day = d;
			else cout << "���������" << endl;
		else
			if (d > 0 && d <= 30)
				day = d;
			else cout << "���������" << endl;
	}

	if (h >= 0 && h < 24)hour = h;														//����ʱ
	else cout << "Сʱ�������" << endl;

	if (min >= 0 && min < 60)minute = min;												//�������
	else cout << "�����������" << endl;

	if (sec >= 0 && sec < 60)second = sec;
	else cout << "���������" << endl;													//������
};


void Timedate::show()							//��ӡ
{
	cout << "year:" << year << endl;
	cout << "month:" << month << endl;
	cout << "day:" << day << endl;
	cout << "hour:" << hour << endl;
	cout << "minute:" << minute << endl;
	cout << "second" << second << endl;
}

int year1;
Month month1;
int day1;
int hour1;
int minute1;
int second1;

void input()//
{
	int mon1;
	cout << "����������" << endl;
	cin >> year1 >> mon1 >> day1 >> hour1 >> minute1 >> second1 ;
	month1 = Month(mon1);
}

int main()
{
	Timedate date;

	input();

	date.set(year1, month1, day1, hour1, minute1, second1);

	date.show();
	
	system("pause");

	return 0;
}
