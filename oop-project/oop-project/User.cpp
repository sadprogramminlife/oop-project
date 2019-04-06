#include "User.h"

User::User(string id, string name, string date, string section, string address)
{
	this->id = id;
	this->name = name;
	this->date = date;
	this->section = section;
	this->address = address;

	this->borrownum = 0;
}

User::~User()
{
}

string User::getId() const
{
	return id;
}

string User::getName() const
{
	return name;
}

string User::getSection() const
{
	return section;
}

string User::getDob() const
{
	return date;
}

string User::getAddress() const
{
	return address;
}

string User::getUser() const
{
	return string(this->id + '|' + this->name + '|' + this->date + '|' + this->section + '|' + this->address);
}

string User::getUserInfo() const
{
	return string(getUser() + '\n');
}

bool User::borrowItem(string itemId)
{
	bool flag = false;
	if (borrownum < borrowlimit) {
		itemList.push_back(itemId);
		borrownum++;
		flag = true;
	}

	return flag;
}

bool User::returnItem(string itemId)
{
	if (0 != borrownum)
		for (int i = 0; i < borrowlimit; i++) {
			if (!itemList[i].compare(itemId)) {
				itemList.erase(itemList.begin()+i);
				borrownum--;
				return true;
			}
		}

	return false;
}

/*
*/

void Scout::setItemLimit()
{
	int limit = -1;
	if (!(this->rank).compare("Member"))
		limit = 1;
	if (!(this->rank).compare("Patrol Leader") || !(this->rank).compare("Assistent Patrol Leader"))
		limit = 3;

	this->borrowlimit = limit;
}

string Scout::getRank()
{
	return this->rank;
}

string Scout::getUserInfo() const
{
	return string(getUser() + '|' + this->rank + '\n');
}

Scout::Scout(string id, string name, string date, string section, string address, string rank)
	: User::User(id, name, date, section, address)
{
	this->rank = rank;
	this->setItemLimit();
}

/*
*/

void VentureScout::setItemLimit()
{
	this->borrowlimit = 3;
}

string VentureScout::getUserInfo() const
{
	return string(getUser() + '\n');
}

VentureScout::VentureScout(string id, string name, string date, string section, string address)
	: User::User(id, name, date, section, address)
{
	this->setItemLimit();
}

/*
*/

void RoverScout::setItemLimit()
{
	this->borrowlimit = 5;
}

string RoverScout::getUserInfo() const
{
	return string(getUser() + '\n');
}

RoverScout::RoverScout(string id, string name, string date, string section, string address)
	: User::User(id, name, date, section, address)
{
	this->setItemLimit();
}

/*
*/

void Scouter::setItemLimit()
{
	this->borrowlimit = 5;
}

string Scouter::getRank()
{
	return this->rank;
}

string Scouter::getUserInfo() const
{
	return string(getUser() + '|' + this->rank + '\n');
}

Scouter::Scouter(string id, string name, string date, string section, string address, string rank)
	: User::User(id, name, date, section, address)
{
	this->rank = rank;
	this->setItemLimit();
}
