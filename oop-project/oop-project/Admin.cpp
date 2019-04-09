#include"Admin.h"
#include"FileHandler.h"
#include"User.h"
#include <vector>
void insertUser(string path)
{
	vector<User> users;
	stringstream ac=(stringstream)fileRead(path);
	string line;
	int s = 0;
	while (getline(ac, line)) 
	{
		string id, name, section, date, address, rank;
		stringstream ss(line);
		if (ss.peek() == '\n') 
		{
			continue;
		}
		getline(ss, id, '|');
		getline(ss, name, '|');
		getline(ss, section, '|');
		getline(ss, date, '|');
		getline(ss, address, '|');
		if (!ss.eof()) 
		{
			getline(ss, rank, '|');
		}

		if (id.substr(0, 3) == "VEN") 
		{
			users[s]=VentureScout(id, name, date, section, address);
			s++;
			continue;
		}
		if (id.substr(0, 3) == "ROV")
		{
			users[s] = RoverScout(id, name, date, section, address);
			s++;
			continue;
		}
		if (id.substr(0, 3) == "SCT") 
		{
			users[s] = Scout(id, name, date, section, address, rank);
			s++;
			continue;
		}
		if (id.substr(0, 3) == "SCM") 
		{
			users[s] = Scouter(id, name, date, section, address, rank);
			s++;
			continue;
		}
	}
	

}

void insertEquip(string path)
{
	vector<Equipment> equips;
	stringstream text = (stringstream)fileRead(path);
	string line;
	int k = 0;
	while (getline(text,line))
	{
		string  itemID, itemName, brand, itemType, dateOfPurchase, condition, status;
		stringstream ssline= (stringstream)line;
		
		getline(ssline, itemID, '|');
		getline(ssline, itemName, '|');
		getline(ssline, brand, '|');
		getline(ssline, itemType, '|');
		getline(ssline, dateOfPurchase, '|');
		getline(ssline, condition, '|');
		getline(ssline, status, '|');
		if (itemID.substr(0, 1) =="T") 
		{
			string tentSize,tentType,numberOfDoors, isDoubleLayer,colour;
			getline(ssline, tentSize, '|');
			getline(ssline, tentType, '|');
			getline(ssline, numberOfDoors, '|');
			getline(ssline, isDoubleLayer, '|');
			getline(ssline, colour, '|');
			equips[k] = Tent(itemID, itemName, brand, itemType, dateOfPurchase, condition, status, tentSize, tentType, numberOfDoors, isDoubleLayer, colour);
			
		}
		else
		{
			if (itemID.substr(0,1)=="L")
			{
				string fuelType;
				string lanternType;
				string lanternSize;
				getline(ssline, fuelType, '|');
				getline(ssline, lanternType, '|');
				getline(ssline, lanternSize, '|');
				equips[k] = Lantern(itemID, itemName, brand, itemType, dateOfPurchase, condition, status, fuelType, lanternType, lanternSize);
			}
			else 
			{
				string fuelType;
				string stoveType;
				getline(ssline, fuelType, '|');
				getline(ssline, stoveType, '|');
				equips[k] = Stove(itemID, itemName, brand, itemType, dateOfPurchase, condition, status, fuelType, stoveType);
			}
		}
		k++;
	}
}

void displayLoan(const LoanControl &s)
{
	std::vector<LoanRecord> yea = s.getLoanRecord;
	int size = yea.size();
	for (int i = 0; i < size, i++) 
	{
		cout << yea[i].getLoanDate << " " << yea[i].getEquipId << " " << yea[i].getEquipName << " " << yea[i].getUserName << " " << yea[i].displayStatus<<endl;
	}
	yea.clear();
}

void displayTents(const LoanControl &s)
{
	vector<Equipment> yea = s.getEquiment;
	int k = yea.size();
	for (int i = 0; i < k; i++) 
	{
		if (yea[i].getItemType() != "tent") 
		{
			yea.erase(yea.begin + k);
		}
	}
	yea.shrink_to_fit();
	for (int i = 0; i < yea.size; i++)
	{
		cout << yea[i].getEquipmentInfo << endl;
	}
	yea.clear();

}

void displayLants(const LoanControl &s)
{
	vector<Equipment> yea = s.getEquiment;
	int k = yea.size();
	for (int i = 0; i < k; i++)
	{
		if (yea[i].getItemType().find("lantern")==false)
		{
			yea.erase(yea.begin + k);
		}
	}
	yea.shrink_to_fit();
	for (int i = 0; i < yea.size; i++)
	{
		cout << yea[i].getEquipmentInfo << endl;
	}
	yea.clear();
}

void displayStoves(const LoanControl &s)
{
	vector<Equipment> yea = s.getEquiment;
	int k = yea.size();
	for (int i = 0; i < k; i++)
	{
		if (yea[i].getItemType().find("stove") == false)
		{
			yea.erase(yea.begin + k);
		}
	}
	yea.shrink_to_fit();
	for (int i = 0; i < yea.size; i++)
	{
		cout << yea[i].getEquipmentInfo << endl;
	}
	yea.clear();
}

void outLoanRecord(const LoanControl &s)
{
	vector<LoanRecord> record = s.getLoanRecord();
	int size = record.size;
	stringstream ss;
	for(int i=0; i<size;i++)
	{
		ss << record[i].getLoanRecord << endl;
	}
	string text = ss.str();
	cout << "The loan record is ready, please type in the name of the text file";
	string path;
	cin >> path;
	fileWrite(path, text);
	record.clear();
}

void outEquipmentList(const LoanControl &s)
{
	vector<Equipment> equipmentList = s.getEquiment();
	int numOfEquipment = equipmentList.size();
	stringstream ss;
	for (int i = 0; i < numOfEquipment; i++)
	{
		ss << equipmentList[i].getEquipmentInfo << endl;
	}
	string text = ss.str();
	cout << "The equipment list is ready, please type in the name of the text file";
	string path;
	cin >> path;
	fileWrite(path, text);
	equipmentList.clear();
}

void updateEquip(const LoanControl &s,string equipid)
{
	cout << "";
}
