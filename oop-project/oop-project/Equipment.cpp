#include "Equipment.h"



void Equipment::setCondition(const string & condition)
{
	this->condition = condition;
}

void Equipment::setStatus(const string & status)
{
	this->status = status;
}

bool Equipment::canBorrow()
{
	if (!getCondition().compare("good") && !getStatus().compare("in")) {
		return true;
	}
	return false;
}

Equipment::Equipment(string itemID, string itemName, string brand, string itemType, string dateOfPurchase, string  condition,
	string status)
{
	this->itemID = itemID ;
	this->itemName= itemName;
	this->brand= brand;
	this->itemType= itemType;
	this->dateOfPurchase= dateOfPurchase;
	this->condition= condition;
	this->status= status;
}


Equipment::~Equipment()
{
}
