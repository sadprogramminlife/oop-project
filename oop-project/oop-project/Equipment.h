#pragma once
#include <string>
using namespace std;
class Equipment
{
protected:string itemID;
		  string itemName;
		  string brand;
		  string itemType;
		  string dateOfPurchase;
		  string condition;
		  string status;

public:
	string getItemID();
	string getItemName();
	string getBrand();
	string getItemType();
	string getDateOfPurchase();
	string getCondition();
	string getStatus();
	string getEquipment();
	virtual string getEquipmentInfo()=0;
	void setCondition(const string & condition);
	void setStatus(const string & status);
	bool canBorrow();



	Equipment(string itemID, string itemName, string brand, string itemType, string dateOfPurchase, string  condition,
		string status);
	~Equipment();
};
class Tent :public Equipment
{
private:
	string tentSize;
	string tentType;
	string numberOfDoors;
	string isDoubleLayer;
	string colour;
public:
	string getTentSize();
	string getTentType();
	string getNumberfDoors();
	string getIsDoubleLayer();
	string getColour();
	string getEquipmentInfo();
	Tent(string itemID, string itemName, string brand, string itemType, string dateOfPurchase, string  condition,
		string status,string tentSize,string tentType,string numbrofDoors,string isDoubleLayer,string colour);
	
	
};
class Stove :public Equipment
{
private:
	string fuelType;
	string stoveType;
	
public:
	string getFuelType();
	string getStoveType();
	string getEquipmentInfo();
	Stove(string itemID, string itemName, string brand, string itemType, string dateOfPurchase, string  condition,
		string status, string stoveType, string fuelType);
};
class Lantern:public Equipment
{
private:
	string fuelType;
	string lanternType;
	string lanternSize;
public:
	string getFuelType();
	string getLanternType();
	string getLanternSize();
	string getEquipmentInfo();

	Lantern(string itemID, string itemName, string brand, string itemType, string dateOfPurchase, string  condition,
		string status, string lanternType, string fuelType,string lanternSize);
};


