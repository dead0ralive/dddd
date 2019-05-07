#pragma once

class Money
{
private:
	int rubley;
	unsigned char kopeek;

public:
	void set(int newRubley, unsigned char newKopeek);
	int getRubley();
	unsigned char getKopeek();
	void addMoney(Money &someMoney);
	void withdrawMoney(Money &someMoney);
	void print();
};