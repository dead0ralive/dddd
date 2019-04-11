#include <iostream>
#include "Department.h"
#include "Employee.h"
#include "idCard.h"

using namespace std;

void Department::setName(std::string newName)
{
	name = newName;
}

string Department::getName()
{
	return this->name;
}

void Department::setHead(Employee *newHead)
{
	head = newHead;
}

Employee *Department::getHead()
{
	return this->head;
}

void Department::print()
{
	cout << " " << this->head << " " << this->name << "\n";
}

void Employee::setName(std::string newName)
{
	name = newName;
}

string Employee::getName()
{
	return this->name;
}

void Employee::setPosition(std::string newPosition)
{
	position = newPosition;
}

string Employee::getPostion()
{
	return this->position;
}

void Employee::setIdCard(IdCard *newIdCard)
{
	card = newIdCard;
}

IdCard *Employee::getIdCard()
{
	return this->card;
}

void Employee::setRoom(int newRoom)
{
	room = newRoom;
}

int Employee::getRoom()
{
	return this->room;
}

void Employee::setDepartment(Department *newDepartment)
{
	department = newDepartment;
}

Department *Employee::getDepartment()
{
	return this->department;
}

void Employee::print()
{
	cout << " " << this->name << " " << "\n";
}

void IdCard::setNumber(int newNumber)
{
	number = newNumber;
}

int IdCard::getNumber()
{
	return this->number;
}

void IdCard::setDateExpire(std::string newDateExpire)
{
	dateExpire = newDateExpire;
}

string IdCard::getDateExpire()
{
	return this->dateExpire;
}

void IdCard::print()
{

}

void main()
{
	Department develop, administration;
	Employee headDepartment, headDeveloper, developer, director, dupityDirector, headAccountant;
	IdCard id101, id5016, id5018, id201, id5022, id5019;

	id101.setNumber(101);
	id5016.setNumber(5016);
	id5018.setNumber(5018);
	id201.setNumber(201);
	id5022.setNumber(5022);
	id5019.setNumber(5019);

	headDepartment.setDepartment(&develop);
	headDepartment.setIdCard(&id101);
	headDepartment.setName("Иванов Иван Иванович");
	headDepartment.setPosition("Глава департамента");
	headDepartment.setRoom(101);

	headDeveloper.setDepartment(&develop);
	headDeveloper.setIdCard(&id5016);
	headDeveloper.setName("Петров Петр Петрович");
	headDeveloper.setPosition("Главный разработчик");
	headDeveloper.setRoom(102);

	developer.setDepartment(&develop);
	developer.setIdCard(&id5018);
	developer.setName("Сидоров Сидор Сидорович");
	developer.setPosition("Разработчик");
	developer.setRoom(102);

	director.setDepartment(&administration);
	director.setIdCard(&id201);
	director.setName("Михайлов Михаил Михайлович");
	director.setPosition("Директор");
	director.setRoom(201);

	dupityDirector.setDepartment(&administration);
	dupityDirector.setIdCard(&id5022);
	dupityDirector.setName("Александрова Александра Александровна");
	dupityDirector.setPosition("Заместитель директора");
	dupityDirector.setRoom(201);

	headAccountant.setDepartment(&administration);
	headAccountant.setIdCard(&id5019);
	headAccountant.setName("Евгеньева Евгения Евгеньевна");
	headAccountant.setPosition("Главный бухгалтер");
	headAccountant.setRoom(202);
}