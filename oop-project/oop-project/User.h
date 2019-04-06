#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
using namespace std;

class User
{
private:
	string id, name, date, section, address;
	int borrownum;
	vector<string> itemList;

protected:
	int borrowlimit;

	string getUser() const;
	
	virtual void setItemLimit() = 0;


public:
	string getId() const;
	string getName() const;
	string getSection() const;
	string getDob() const;
	string getAddress() const;

	virtual string getUserInfo() const = 0;

	bool borrowItem(string itemId);
	bool returnItem(string itemId);

	User(string id, string name, string date, string section, string address);
	virtual ~User();
};

class Scout : public User
{
private:
	string rank;
	void setItemLimit();

public:
	string getRank();
	string getUserInfo() const;
	
	Scout(string id, string name, string date, string section, string address, string rank);
};

class VentureScout : public User
{
private:
	void setItemLimit();

public:
	string getUserInfo() const;

	VentureScout(string id, string name, string date, string section, string address);
};

class RoverScout : public User
{
private:
	void setItemLimit();

public:
	string getUserInfo() const;

	RoverScout(string id, string name, string date, string section, string address);
};

class Scouter :public User
{
private:
	string rank;
	void setItemLimit();
	
public:
	string getRank();
	string getUserInfo() const;

	Scouter(string id, string name, string date, string section, string address, string rank);
};

#endif