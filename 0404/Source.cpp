#include <iostream>
#include "Mage.h"
//#include "Spell.h"

using namespace std;

void Mage::init(int newhp, int newmp, std::string newname)
{
	hp = newhp;
	mp = newmp;
	name = newname;
}

string Mage::getname()
{
	return this->name;
}

void Mage::say(std::string text)
{
	cout << this->name << " say " << text << endl;
}

int Mage::cast(Spell &spl, Mage &target)
{
	if (hp > 0)
	{
		cout << this->name << " hit " << spl.name << " enemy " << target.getname() << endl; 
		target.hit(spl);
	}
	else
	{
		say("I am dead!");
	}
	return 0;
}

void Mage::hit(Spell &spl)
{
	this->hp = this->hp-spl.dhp;
	this->mp = this->mp-spl.dmp;
	if (this->hp <= 0) 
	{
		say("I am loser!");
	}

}

void main()
{
	Mage Vanya;
	Mage Boris;

	Spell bolt;
	Spell drain;

	bolt.name = "bolt";
	bolt.dhp = 25;
	bolt.dmp = 0;

	drain.name = "drain";
	drain.dhp = 5;
	drain.dmp = 25;

	Vanya.init(100, 100, "Vanya");
	Vanya.say("Hi!");

	Boris.init(100, 100, "Boris");
	Boris.say("q");
	
	Vanya.cast(drain, Boris);
	Boris.cast(bolt, Vanya);
	Vanya.cast(bolt, Boris);
	Boris.cast(bolt, Vanya);
	Vanya.cast(drain, Boris);
	Boris.cast(bolt, Vanya);
	Vanya.cast(drain, Boris);
	Boris.cast(bolt, Vanya);
	Vanya.cast(drain, Boris);
	Boris.cast(bolt, Vanya);

	system("pause");
}