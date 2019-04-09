#include<string>
#include<sstream>
#include<iostream>
#include"LoanControl.h"
#include"FileHandler.h"
using namespace std;

void insertUser(string path);
void insertEquip(string path);
void displayLoan(const LoanControl &s);
void displayTents(const LoanControl &s);
void displayLants(const LoanControl &s);
void displayStoves(const LoanControl &s);
void updateEquip();
void outLoanRecord(const LoanControl &s);
void outEquipmentList(const LoanControl &s);


