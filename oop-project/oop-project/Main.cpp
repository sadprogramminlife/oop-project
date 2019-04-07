#include <iostream>
#include <string>
#include "Equipment.h"
using namespace std;

int main() {
	Stove s("S001", "Camp Stove", "MSR", "stove", "04042015", "good", "in", "lightweight" ,"stove gas");
	cout << s.getEquipmentInfo();

	system("pause");
	return 0;
}