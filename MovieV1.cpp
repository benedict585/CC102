#include <iostream>

using namespace std;

int main()
{
	int age;
	char parent;
	double money;
	string movieOp;
	
	cout << "Enter your age: ";
	cin >> age;
	cout << "Are you with parent? (Y or N): ";
	cin >> parent;
	cout << "Enter amount of money: ";
	cin >> money;
	
	if (age >13) {
		if( parent == 'Y') {
			cout << "G or PG" << endl;
		} else if (parent == 'N' || parent == 'n') {
			cout << "G" << endl;
		}
	}
	else if (age >= 13 && age < 16) {
		if (parent == 'Y' || parent == 'y') { 
			cout << "G, PG, R" << endl;
		}
	}
	else {
		cout << "G, PG, PG-13, R" << endl;
	}
	return 0;
}