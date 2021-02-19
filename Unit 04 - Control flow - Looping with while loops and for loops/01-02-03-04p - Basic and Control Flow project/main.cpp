#include <iostream>
#include <string>
using namespace std;

int main()
{
	float PIZZA_PRICE = 10;
	int choice;

	cout << "PIZZA MAKER" << endl << endl;
	cout << "Current Pizza: " << endl;
	cout << "Price: " << PIZZA_PRICE << endl;
	cout << "1. Sauces" << endl;
	cout << "2. Add Cheese" << endl;
	cout << "3. Meats" << endl;
	cout << "4. Veggies" << endl;
	cout << "5. Reset Pizza" << endl;
	cout << "6. Checkout" << endl;
	cout << "_______________" << endl;

	cout << "Please select what you would like to do: ";
	cin >> choice;


	return 0;
}