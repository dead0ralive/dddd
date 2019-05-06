#include <iostream>
#include "Time.h"

using namespace std;

void Time::setTime(long newHours, long newMinutes)
{
	hours = newHours;
	minutes = newMinutes;
}

long Time::getHours()
{
	return this->hours;
}

long Time::getMinutes()
{
	return this->minutes;
}

Time Time::operator+(Time &plusTime)
{
	Time result;
	result.hours = this->hours + plusTime.hours;
	result.minutes = this->minutes + plusTime.minutes;
	if (result.minutes >= 60)
	{
		result.hours++;
		result.minutes -= 60;
	}
	return result;
}

Time Time::operator-(Time &minusTime)
{
	Time result;
	result.hours = this->hours - minusTime.hours;
	result.minutes = this->minutes - minusTime.minutes;
	if (minutes < minusTime.minutes)
	{
		result.hours--;
		result.minutes = 60 - result.minutes*(-1);
	}
	return result;
}

Time Time::operator*(int mulTimes)
{
	Time result;
	result.hours = this->hours * mulTimes;
	result.minutes = this->minutes * mulTimes;
	while (result.minutes >= 60)
	{
		result.hours++;
		result.minutes -= 60;
	}
	return result;
}

void Time::print()
{
	cout << this->hours << " hours " << this->minutes << " minutes" << "\n";
}

void main()
{
	Time a, b, plus, minus, mul;

	a.setTime(2, 50);
	b.setTime(0, 40);

	plus = a + a;
	minus = a - b;
	mul = a * 5;

	plus.print();
	minus.print();
	mul.print();

	system("pause");
}