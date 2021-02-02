#include <iostream>
using namespace std;

int main()
{

	cout << endl << "PROGRAM 1" << endl;
	float bankBalance, withdrawAmount;
	cout << "What is your bank balance? ";
	cin >> bankBalance;
	cout << "How much to withdraw? ";
	cin >> withdrawAmount;
	bankBalance = bankBalance - withdrawAmount;
	cout << "Balance: " << bankBalance;
	if (bankBalance < 0)
	{
		cout << " (OVERDRAWN)";
	}



	cout << endl;
	cout << endl << "PROGRAM 2" << endl;
	float earnedPoints, totalPoints, result;
	cout << "How many points did they scored? ";
	cin >> earnedPoints;
	cout << "How many total points were there? ";
	cin >> totalPoints;
	result = earnedPoints / totalPoints;
	if (result >= .50)
	{
		cout << "Pass";
	}
	else
	{
		cout << "Fail";
	}



	cout << endl;
	cout << endl << "PROGRAM 3" << endl;
	int charge;
	cout << "Enter your phone charge %: ";
	cin >> charge;
	if (charge >= 95)
	{
		cout << "[****]";
	}
	else if (charge >= 75)
	{
		cout << "[***_]";
	}
	else if (charge >= 50)
	{
		cout << "[**__]";
	}
	else if (charge >= 25)
	{
		cout << "[*___]";
	}
	else
	{
		cout << "[____]";
	}



	cout << endl;
	cout << endl << "PROGRAM 4" << endl;
	int choice;
	cout << "1. Coffee" << endl;
	cout << "2. Tea" << endl;
	cout << "3. Water" << endl;
	cout << "4. Soda" << endl;
	cout << "5. Juice" << endl;
	cout << "Select a drink: ";
	cin >> choice;
	if (choice >= 1 && choice <= 5)
	{
		cout << "Good choice!" << endl;
	}
	else
	{
		cout << "Invalid choice!" << endl;
	}



	return 0;
}