#include <iostream>
#include <string>
using namespace std;

int main()
{	
	bool CHECK_OUT = false;
	float PIZZA_PRICE = 8;
	float PIZZA_SAUCE;
	float PIZZA_CHEESE;
	float PIZZA_MEATS;
	float PIZZA_VEGGIES;
	int choice;
	string SAUCE;
	string MEATS;
	string VEGGIES;

	while (!CHECK_OUT)
	{
		cout << "PIZZA MAKER" << endl << endl;
		cout << "Current Pizza: " << endl;
		cout << "Price: $" << PIZZA_PRICE << endl;
		cout << "1. Sauces" << endl;
		cout << "2. Add Cheese" << endl;
		cout << "3. Meats" << endl;
		cout << "4. Veggies" << endl;
		cout << "5. Reset Pizza" << endl;
		cout << "6. Checkout" << endl;
		cout << "_________________________________________" << endl;

		cout << "Please select what you would like to do: ";
		cin >> choice;
		cout << endl;

			if (choice == 1)
			{
				cout << "SAUCES MENU" << endl;
				cout << "1. Tomato" << endl;
				cout << "2. Alfredo" << endl;
				cout << "3. Barbecue" << endl;
				cout << "4. Buffalo" << endl;
				cout << "________________________________________________" << endl;
				cout << "What sauce would you like to add to your pizza: " << endl;
				cin >> choice;


				if (choice == 1)
				{
					SAUCE = "Tomato";
					PIZZA_SAUCE = .53;
					cout << endl;
				}
				else if (choice == 2)
				{
					SAUCE = "Alfredo";
					cout << endl;
				}
				else if (choice == 3)
				{
					SAUCE = "Barbecue";
					PIZZA_SAUCE = .53;
					cout << endl;
				}
				else if (choice == 4)
				{
					SAUCE = "Buffalo";
					PIZZA_SAUCE = .53;
					cout << endl;
				}
			}
		else if (choice == 2)
		{

		}
		else if (choice == 3)
		{

		}
		else if (choice == 4)
		{

		}
		else if (choice == 5)
		{

		}
		else if (choice == 6)
		{

		}
	}
	

	
	
}