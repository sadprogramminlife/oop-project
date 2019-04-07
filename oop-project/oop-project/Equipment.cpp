#include "Equipment.h"

string Equipment::getEquipment()
{
	return string(this->itemID + "|" + this->itemName + "|" + this->brand + "|" + this->itemType + "|" + this->dateOfPurchase + "|" + this->condition + "|" + this->status);
}

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

Equipment::Equipment(string itemID, string itemName, string brand, string itemType, string dateOfPurchase, string condition, string status)
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

string Stove::getFuelType()
{
	return this->fuelType;
}

string Stove::getStoveType()
{
	return this->stoveType;
}

string Stove::getEquipmentInfo()
{
	return getEquipment() + string("|" +this->fuelType + "|" + this->stoveType +"\n");
}

Stove::Stove(string itemID, string itemName, string brand, string itemType, string dateOfPurchase, string condition, string status, string stoveType, string fuelType)
	:Equipment::Equipment(itemID, itemName, brand, itemType, dateOfPurchase, condition, status)
{
	this->stoveType = stoveType;
	this->fuelType = fuelType;
}

string Lantern::getFuelType()
{
	return fuelType;

}

string Lantern::getLanternType()
{
	return this->lanternType;
}

string Lantern::getLanternSize()
{
	return lanternSize;
}

string Lantern::getEquipmentInfo()
{
	return getEquipment() + string("|" + this->fuelType + "|" + this->lanternType + "|" + this->lanternSize+"\n");
}

Lantern::Lantern(string itemID, string itemName, string brand, string itemType, string dateOfPurchase, string condition, string status, string lanternType, string fuelType, string lanternSize)
	:Equipment::Equipment(itemID, itemName, brand, itemType, dateOfPurchase, condition, status)
{
	this->lanternType = lanternType;
	this->fuelType = fuelType;
	this->lanternSize = lanternSize;
}

string Tent::getTentSize()
{
	return this->tentSize;
}

string Tent::getTentType()
{
	return this->tentType;
}

string Tent::getNumberfDoors()
{
	return this->numberOfDoors;
}

string Tent::getIsDoubleLayer()
{
	return this->isDoubleLayer;
}

string Tent::getColour()
{
	return this->colour;
}

string Tent::getEquipmentInfo()
{
	return getEquipment()+string("|"+this->tentSize+"|"+this->tentType+"|"+this->numberOfDoors+"|"+this->isDoubleLayer+"|"+this->colour+"\n");
}

Tent::Tent(string itemID, string itemName, string brand, string itemType, string dateOfPurchase, string condition, string status, string tentSize, string tentType, string numberOfDoors, string isDoubleLayer, string colour)
	: Equipment::Equipment(itemID,itemName,brand,itemType,dateOfPurchase, condition, status)
{
	this->tentSize = tentSize;
	this->tentType = tentType;
	this->numberOfDoors = numberOfDoors;
	this->isDoubleLayer = isDoubleLayer;
	this->colour = colour;
}

string Equipment::getItemID()
{
	return this->itemID;
}

string Equipment::getItemName()
{
	return this->itemName;
}

string Equipment::getBrand()
{
	return this->brand;
}

string Equipment::getItemType()
{
	return this->itemType;
}

string Equipment::getDateOfPurchase()
{
	return this->dateOfPurchase;
}

string Equipment::getCondition()
{
	return this->condition;
}

string Equipment::getStatus()
{
	return this->status;
}
