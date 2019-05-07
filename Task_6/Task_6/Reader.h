#pragma once
#include <string>
#include "Book.h"

class Reader
{
public:
	std::string fio;
	int age;
	Book *current_book();
	void print();
};