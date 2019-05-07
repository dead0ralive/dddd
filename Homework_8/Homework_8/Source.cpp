#include <iostream>
#include "Money.h"

using namespace std;

void Money::set(int newRubley, unsigned char newKopeek)
{
	rubley = newRubley;
	kopeek = newKopeek;
}

int Money::getRubley()
{
	return this->rubley;
}

unsigned char Money::getKopeek()
{
	return this->kopeek;
}

void Money::addMoney(Money &someMoney)
{
	Money result;
	result.rubley = this->rubley + someMoney.rubley;
	result.kopeek = this->kopeek + someMoney.kopeek;
	if (result.kopeek >= 100)
	{
		result.rubley++;
		result.kopeek -= 100;
	}

	cout << result.rubley << "," << static_cast<unsigned>(result.kopeek) << "\n";
	return;
}

void Money::withdrawMoney(Money &someMoney)
{
	Money result;
	result.rubley = this->rubley - someMoney.rubley;
	result.kopeek = this->kopeek - someMoney.kopeek;
	if (kopeek < result.kopeek)
	{
		result.rubley--;
		result.kopeek = 100 - result.kopeek*(-1);
	}

	cout << result.rubley << "," << static_cast<unsigned>(result.kopeek) << "\n";
	return;
}


void main()
{
	Money a, b, add, sub;

	a.set(2, 35);
	b.set(1, 48);

	a.addMoney(b);
	a.withdrawMoney(b);

	system("pause");
}