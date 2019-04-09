#pragma once
#include<vector>
#include"User.h"
#include"Equipment.h"
#include"LoanRecord.h"
using namespace std;

class LoanControl 
{
private:
	std::vector<User> users;
	std::vector<Equipment> equipments;
	std::vector<LoanRecord> records;
	public: 
		LoanControl();
		template<typename T>
		LoanControl(T series);
		std::vector<User> getUsers() const;
		std::vector<Equipment> getEquiment() const;
		std::vector<LoanRecord> getLoanRecord() const;
};