#pragma once
#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

string fileRead(string path);
void fileWrite(string path, string str);

#endif