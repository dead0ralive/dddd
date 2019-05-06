#pragma once
#include <string>

class Time
{
private:
	long hours;
	long minutes;

public:
	void setTime(long newHours, long newMinutes);
	long getHours();
	long getMinutes();
	Time operator+(Time &plusTime);
	Time operator-(Time &minusTime);
	Time operator*(int mulTimes);
	void print();
};