#include <iostream>

using namespace std;

int main ()
{
	string nickname, yearlevel, school;
	cout << "nickname: ";
	cin >> nickname;
	cout << "Course-Year Level: ";
	cin >> yearlevel;
	cout << "Enter School: "; 
	cin >> school;
	cout << "Wow Congrats " << nickname << " is a nice course. And you are studying in " << school << " which is one of the Center of Excellent in Tertiary Education" << endl;
	return 0;
}