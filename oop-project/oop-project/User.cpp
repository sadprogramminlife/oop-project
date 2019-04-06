#include "User.h"

User::User()
{}

User::User(string id, string name, string date, string section, string address)
{
	this->id = id;
	this->name = name;
	this->date = date;
	this->section = section;
	this->address = address;
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

string Scout::getRank()
{
	return this->rank;
}

Scout::Scout(string id, string name, string date, string section, string address, string rank)
	: User::User(id, name, date, section, address)
{
	this->rank = rank;
	if (!rank.compare("Member"))
		this->borrowlimit = 1;
	if (!rank.compare("Patrol Leader") || !rank.compare("Assistent Patrol Leader"))
		this->borrowlimit = 3;
}

VentureScout::VentureScout(string id, string name, string date, string section, string address)
	: User::User(id, name, date, section, address)
{
	this->borrowlimit = 3;
}

RoverScout::RoverScout(string id, string name, string date, string section, string address)
	: User::User(id, name, date, section, address)
{
		this->borrowlimit = 5;
}

string Scouter::getRank()
{
	return this->rank;
}

Scouter::Scouter(string id, string name, string date, string section, string address, string rank)
	: User::User(id, name, date, section, address)
{
	this->rank = rank;
	this->borrowlimit = 5;

}
