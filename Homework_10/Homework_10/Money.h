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
	bool operator>(Money &smallerMoney);
	bool operator<(Money &biggerMoney);
	bool operator>=(Money &soeMoney);
	bool operator<=(Money &boeMoney);
	bool operator==(Money &equalMoney);
	bool operator!=(Money &notequalMoney);
	void print();
};