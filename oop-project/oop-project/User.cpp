#include "User.h"

User::User()
{}

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
