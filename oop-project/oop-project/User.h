#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class User
{
protected:
	string id, name, date, section, address;
	int borrowlimit, borrowmun;

public:
	string getId() const;
	string getName() const;
	string getSection() const;
	string getDob() const;
	string getAddress() const;

	User();
	User(string id, string name, string date, string section, string address);
	~User();
};

class Scout : public User
{
private:
	string rank;
public:
	string getRank();
	
	Scout(string id, string name, string date, string section, string address, string rank);
};

class VentureScout : public User
{
public:
	VentureScout(string id, string name, string date, string section, string address);
};

class RoverScout : public User
{
public:
	RoverScout(string id, string name, string date, string section, string address);
};

class Scouter :public User
{
private:
	string rank;
	
public:
	string getRank();
	Scouter(string id, string name, string date, string section, string address, string rank);
};

#endif