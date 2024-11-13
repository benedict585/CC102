#include <iostream>
using namespace std;
int main() {
	int temp;
	cout << "What is the current temperature?";
	cin >> temp;
	
	if (temp < 32) {
		cout << "Bring a heavy jacket!" << endl;
		} 
	else if(temp >= 32 && temp <= 50) {
		
		cout << "Bring a light jacket!" << endl;
		} 
	else {
		cout << "Don't bring jacket" << endl;
		}
	
	return 0;
}
	