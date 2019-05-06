#include <iostream>
#include "Money.h"

using namespace std;

void Money::setMoney(long newRubles, long newKopecks)
{
	rubles = newRubles;
	kopecks = newKopecks;
}

long Money::getRubles()
{
	return this->rubles;
}

long Money::getKopecks()
{
	return this->kopecks;
}

Money Money::operator+(Money &plusMoney)
{
	Money result;
	result.rubles = this->rubles + plusMoney.rubles;
	result.kopecks = this->kopecks + plusMoney.kopecks;
	if (result.kopecks >= 100)
	{
		result.rubles++;
		result.kopecks -= 100;
	}
	return result;
}

Money Money::operator-(Money &minusMoney)
{
	Money result;
	result.rubles = this->rubles - minusMoney.rubles;
	result.kopecks = this->kopecks - minusMoney.kopecks;
	if (kopecks < minusMoney.kopecks)
	{
		result.rubles--;
		result.kopecks = 100 - result.kopecks*(-1);
	}
	return result;
}

Money Money::operator*(int mulMoney)
{
	Money result;
	result.rubles = this->rubles * mulMoney;
	result.kopecks = this->kopecks * mulMoney;
	while (result.kopecks >= 100)
	{
		result.rubles++;
		result.kopecks -= 100;
	}
	return result;
}

void Money::print()
{
	cout << this->rubles << "," << this->kopecks << "\n";
}

void main()
{
	Money a, b, plus, minus, mul;

	a.setMoney(12, 34);
	b.setMoney(6, 45);

	plus = a + b;
	minus = a - b;
	mul = a * 3;

	plus.print();
	minus.print();
	mul.print();

	system("pause");
}