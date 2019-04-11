#include <iostream>
#include "Animal.h"
#include "Human.h"

using namespace std;

void Animal::setName(std::string newName)
{
	name = newName;
}

string Animal::getName()
{
	return this->name;
}

void Animal::say(std::string text)
{

}

void Human::init(std::string newName, int newAge)
{
	name = newName;
	age = newAge;
}

string Human::getName()
{
	return this->name;
}

int Human::getAge()
{
	return this->age;
}

void Human::say(std::string text)
{

}

void main()
{
	Animal mouse, chicken;
	Human grandpa, grandma;

	mouse.setName("Mouse");
	chicken.setName("Chicken");

	grandpa.init("Grandpa", 70);
	grandma.init("Grandma", 60);

}