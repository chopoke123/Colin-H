#include <iostream>
#include <string>
using namespace std;

int main()
{	
	bool CHECK_OUT = false;
	float PIZZA_PRICE = 8;
	float SAUCE_PRICE;
	float CHEESE_PRICE;
	float MEAT_PRICE;
	float VEGGIE_PRICE;
	int choice;
	string SAUCE;
	string MEATS;
	string VEGGIES;
	string CHESSE;

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
					SAUCE_PRICE = .53;
					cout << endl;
				}
				else if (choice == 2)
				{
					SAUCE = "Alfredo";
					SAUCE_PRICE = .53;
					cout << endl;
				}
				else if (choice == 3)
				{
					SAUCE = "Barbecue";
					SAUCE_PRICE = .53;
					cout << endl;
				}
				else if (choice == 4)
				{
					SAUCE = "Buffalo";
					SAUCE_PRICE = .53;
					cout << endl;
				}
			}
		else if (choice == 2)
		{
				cout << "Would you like cheese on your pizza?";
				cout << "1. Yes";
				cout << "2. No";
				cin >> choice;

				if (choice == 1)
				{
					CHEESE_PRICE = .73;
					CHESSE = "Chese";
				}
				else if (choice == 2 )
				{
					CHEESE_PRICE = 0;
					CHESSE = "no cheese";
				}
		}
		else if (choice == 3)
		{
				cout << "MEAT MENU" << endl;
				cout << "1. Pepperoni" << endl;
				cout << "2. Sausage" << endl;
				cout << "3. Ham" << endl;
				cout << "4. Chicken" << endl;
				cout << "5. Bacon" << endl;
				cout << "________________________________________________" << endl;
				cout << "What meat would you like to add to your pizza: " << endl;
				cin >> choice;

				if (choice == 1)
				{
					MEATS = "Pepperoni";
					MEAT_PRICE = 1.25;
					cout << endl;
				}
				else if (choice == 2)
				{
					MEATS = "Sausage";
					MEAT_PRICE = 1.25;
					cout << endl;
				}
				else if (choice == 3)
				{
					MEATS = "Ham";
					MEAT_PRICE = 1.25;
					cout << endl;
				}
				else if (choice == 4)
				{
					MEATS = "Chicken";
					MEAT_PRICE = 1.25;
					cout << endl;
				}
				else if (choice -= 5)
				{
					MEATS = "Bacon";
					MEAT_PRICE = 1.25;
					cout << endl;
				}
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