#include<iostream>
#include<stdlib.h>
 
using namespace std;

enum Month { Jan=1, Feb, Mar, Apr, May, June, July, Aug, Sept, Oct, Nov, Dec };//月份枚举


class Timedate
{
public:
	Timedate()								//构造
	{
		int year = 2010;
		Month month = Jan;
	};

	void set(int y, Month m, int d, int h, int min, int sec);								//设置
	void show();							//打印

private:
	Month month;
	int year, day;
	int hour, minute, second;

};


void Timedate::set(int y, Month m, int d, int h, int min, int sec)						//设置
{

	if (y >= 2010 && y <= 2015)year = y;												//输入年
	else {
		cout << "年份输入错误" << endl;
		return;
	}

	month = m;																			//输入月

	if (month == Feb)																	//输入日
	{
		if (year == 2012)						//2012年为闰年，闰年的2月有29天
			if (d > 0 && d <= 29)
				day = d;
			else cout << "日输入错误" << endl;
		else
			if (d > 0 && d <= 28)
				day = d;
			else cout << "日输入错误" << endl;
	}
	else
	{
		if (month == Jan || month == Mar || month == May || month == July || month == Aug || month == Oct || month == Dec)//1,3,5,7,8,10,12月有31天
			if (d > 0 && d <= 31)
				day = d;
			else cout << "日输入错误" << endl;
		else
			if (d > 0 && d <= 30)
				day = d;
			else cout << "日输入错误" << endl;
	}

	if (h >= 0 && h < 24)hour = h;														//输入时
	else cout << "小时输入错误" << endl;

	if (min >= 0 && min < 60)minute = min;												//输入分钟
	else cout << "分钟输入错误" << endl;

	if (sec >= 0 && sec < 60)second = sec;
	else cout << "秒输入错误" << endl;													//输入秒
};


void Timedate::show()							//打印
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
	cout << "请输入日期" << endl;
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
