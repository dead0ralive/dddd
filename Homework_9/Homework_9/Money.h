#pragma once
class Money
{
private:
	long rubles;
	long kopecks;

public:
	void setMoney(long newRubles, long newKopecks);
	long getRubles();
	long getKopecks();
	Money operator+(Money &plusMoney);
	Money operator-(Money &minusMoney);
	Money operator*(int mulMoney);
	void print();
};