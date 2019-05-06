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

bool Money::operator>(Money &smallerMoney)
{
	if (this->rubles > smallerMoney.rubles)
		return true;
	else
		if (this->rubles < smallerMoney.rubles)
			return false;
		else
			if (this->kopecks > smallerMoney.kopecks)
				return true;
			else
				if (this->kopecks < smallerMoney.kopecks)
					return false;
}

bool Money::operator<(Money &biggerMoney)
{
	if (this->rubles < biggerMoney.rubles)
		return true;
	else
		if (this->rubles > biggerMoney.rubles)
			return false;
		else
			if (this->kopecks < biggerMoney.kopecks)
				return true;
			else
				if (this->kopecks > biggerMoney.kopecks)
					return false;
}

bool Money::operator>=(Money &soeMoney)
{
	if (this->rubles >= soeMoney.rubles)
		return true;
	else
		if (this->rubles < soeMoney.rubles)
			return false;
		else
			if (this->kopecks >= soeMoney.kopecks)
				return true;
			else
				if (this->kopecks < soeMoney.kopecks)
					return false;
}

bool Money::operator<=(Money &boeMoney)
{
	if (this->rubles <= boeMoney.rubles)
		return true;
	else
		if (this->rubles > boeMoney.rubles)
			return false;
		else
			if (this->kopecks <= boeMoney.kopecks)
				return true;
			else
				if (this->kopecks > boeMoney.kopecks)
					return false;
}

bool Money::operator==(Money &equalMoney)
{
	if (this->rubles == equalMoney.rubles)
		return true;
	else
		if (this->rubles != equalMoney.rubles)
			return false;
		else
			if (this->kopecks == equalMoney.kopecks)
				return true;
			else
				if (this->kopecks != equalMoney.kopecks)
					return false;
}

bool Money::operator!=(Money &notequalMoney)
{
	if (this->rubles != notequalMoney.rubles)
		return true;
	else
		if (this->rubles == notequalMoney.rubles)
			return false;
		else
			if (this->kopecks != notequalMoney.kopecks)
				return true;
			else
				if (this->kopecks == notequalMoney.kopecks)
					return false;
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

	if (a > b)
		cout << "a > b - true" << "\n";
	else
		cout << "a > b - false" << "\n";

	if (a < b)
		cout << "a < b - true" << "\n";
	else
		cout << "a < b - false" << "\n";

	if (a >= b)
		cout << "a >= b - true" << "\n";
	else
		cout << "a >= b - false" << "\n";

	if (a <= b)
		cout << "a <= b - true" << "\n";
	else
		cout << "a <= b - false" << "\n";

	if (a == b)
		cout << "a == b - true" << "\n";
	else
		cout << "a == b - false" << "\n";

	if (a != b)
		cout << "a != b - true" << "\n";
	else
		cout << "a != b - false" << "\n";

	system("pause");
}