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

bool Time::operator>(Time &smallerTime)
{
	if (this->hours > smallerTime.hours)
		return true;
	else
		if (this->hours < smallerTime.hours)
			return false;
		else
			if (this->minutes > smallerTime.minutes)
				return true;
			else
				if (this->minutes < smallerTime.minutes)
					return false;
}

bool Time::operator<(Time &biggerTime)
{
	if (this->hours < biggerTime.hours)
		return true;
	else
		if (this->hours > biggerTime.hours)
			return false;
		else
			if (this->minutes > biggerTime.minutes)
				return true;
			else
				if (this->minutes < biggerTime.minutes)
					return false;
}

void Time::print()
{
	cout << this->hours << " hours " << this->minutes << " minutes" << "\n";
}

void main()
{
	Time a, b, plus, minus, mul, massTime[10], temp;

	a.setTime(2, 50);
	b.setTime(0, 40);

	plus = a + a;
	minus = a - b;
	mul = a * 5;

	plus.print();
	minus.print();
	mul.print();

	if (a > b)
		cout << "a > b - true" << "\n";
	else
		cout << "a > b - false" << "\n";

	if (a < b)
		cout << "a < b - true" << "\n";
	else
		cout << "a < b - false" << "\n";

	for (int i = 0; i < 10; i++)
	{
		massTime[i].setTime(rand() % 23 + 1, rand() % 59 + 0);
	}

	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (massTime[j] > massTime[j + 1])
			{
				temp = massTime[j];
				massTime[j] = massTime[j + 1];
				massTime[j + 1] = temp;
			}
		}
	}

	cout << "\n" << "Time array: " << "\n";

	for (int i = 0; i < 10; i++)
	{
		massTime[i].print();
	}

	system("pause");
}