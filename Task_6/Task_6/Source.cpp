#include <iostream>
#include "Reader.h"

using namespace std;

void Book::set_name(const char * new_name)
{
	this->name = new_name;
	return;
}

void Book::set_year(const int new_year)
{
	this->year = new_year;
	return;
}

void Book::get_info()
{
	cout << this->name << " (" << this->year << ")" << "\n";
	return;
}

void Reader::print()
{
	cout << this->fio << ", " << this->current_book << "\n";
}

int main()
{
	Book wap, lotr, hp;
	Reader vanya, kolya, natasha;

	wap.set_name("War and Piece");
	wap.set_year(1869);

	lotr.set_name("The Lord of the Rings");
	lotr.set_year(1954);

	hp.set_name("Harry Potter and the Philosopher's Stone");
	hp.set_year(1997);

	vanya.fio = "Vanya";
	vanya.age = 16;
	vanya.current_book(wap);

	kolya.fio = "Kolya";
	kolya.age = 25;
	kolya.current_book(lotr);

	natasha.fio = "Natasha";
	natasha.age = 12;
	natasha.current_book(hp);

	wap.get_info();
	lotr.get_info();
	hp.get_info();

	cout << "\n";
	
	vanya.print();
	kolya.print();
	natasha.print();
	
	system("pause");
}