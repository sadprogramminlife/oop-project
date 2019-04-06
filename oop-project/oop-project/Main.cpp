#include "User.h"
#include <iostream>
using namespace std;

int main() {
	User *user = new Scout("SCT001", "Michael Tam", "Scout", "16051996", "9B Odeon House, Causeway Bay", "Patrol Leader");
	cout << user->borrowItem("1") << endl;

	cout << user->borrowItem("2") << endl;

	cout << user->borrowItem("3") << endl;

	cout << user->returnItem("3") << endl;
	cout << user->returnItem("1") << endl;
	cout << user->returnItem("2") << endl;

	cout << user->getUserInfo();

	return 0;
}