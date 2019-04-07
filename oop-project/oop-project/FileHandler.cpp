#include "FileHandler.h"

string fileRead(string path) {
	ifstream file(path, ios::in);

	if (file.is_open()) {
		stringstream ss;
		ss << file.rdbuf();
		return ss.str();
	}

	return NULL;
}

void fileWrite(string path, string str) {
	ofstream file(path, ios::out);

	if (file.is_open()) {
		stringstream ss;
		ss << str;
		file << ss.rdbuf();
	}
}
