#include <iostream>
#include <string>
using namespace std;

int main()
{	
	bool CHECK_OUT = false;
	int choice;

	float PIZZA_PRICE = 8;
	float SAUCE_PRICE = 0;
	float CHEESE_PRICE = 0;
	float MEAT_PRICE = 0;
	float VEGGIE_PRICE = 0;
	
	string SAUCE = "";
	string MEATS = "";
	string VEGGIES = "";
	string CHESSE = "";
	

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
				cout << "SAUCE MENU" << endl;
				cout << "1. Tomato" << endl;
				cout << "2. Alfredo" << endl;
				cout << "3. Barbecue" << endl;
				cout << "4. Buffalo" << endl;
				cout << "________________________________________________" << endl;
				cout << "What sauce would you like to add to your pizza: ";
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
				cout << "Would you like cheese on your pizza?" << endl;
				cout << "1. Yes" << endl;
				cout << "2. No" << endl;
				cout << "_______" << endl;
				cin >> choice;
				cout << endl;

				if (choice == 1)
				{
					CHEESE_PRICE = .73;
					CHESSE = "Chesse";
				}
				else if (choice == 2 )
				{
					CHEESE_PRICE = 0;
					CHESSE = "No cheese";
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
				cout << "What meat would you like to add to your pizza: ";
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
				cout << "VEGGIE MENU" << endl;
				cout << "1. Mushrooms" << endl;
				cout << "2. Black Olives" << endl;
				cout << "3. Pineapple" << endl;
				cout << "4. Tomatoes" << endl;
				cout << "________________________________________________" << endl;
				cout << "What veggies would you like to add to your pizza: ";
				cin >> choice;


				if (choice == 1)
				{
					VEGGIES = "Mushrooms";
					VEGGIE_PRICE = .83;
					cout << endl;
				}
				else if (choice == 2)
				{
					VEGGIES = "Black Olives";
					VEGGIE_PRICE = .83;
					cout << endl;
				}
				else if (choice == 3)
				{
					VEGGIES = "Pineapple";
					VEGGIE_PRICE = .83;
					cout << endl;
				}
				else if (choice == 4)
				{
					VEGGIES = "Tomatoes";
					VEGGIE_PRICE = .83;
					cout << endl;
				}
		}
		else if (choice == 5)
		{
			cout << "Are you sure you want to reset your pizza: " << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> choice;
			
			if (choice == 1)
			{
				PIZZA_PRICE = 8;
				SAUCE_PRICE = 0;
				CHEESE_PRICE = 0;
				MEAT_PRICE = 0;
				VEGGIE_PRICE = 0;

				SAUCE = "";
				MEATS = "";
				VEGGIES = "";
				CHESSE = "";
			}
		}
		else if (choice == 6)
		{
			cout << "__________________________________________________________________" << endl;
			cout << "CHECKOUT" << endl;
			cout << "Pizza: " << SAUCE << ", " << CHESSE << ", " << MEATS << ", and " << VEGGIES << endl;
			cout << "CHECKOUT" << endl;
			
			PIZZA_PRICE = SAUCE_PRICE + CHEESE_PRICE + MEAT_PRICE + VEGGIE_PRICE + 8;

			cout << "Price: $" << PIZZA_PRICE << endl;

			cout << "THANK YOU FOR ORDERING FROM COLIN'S PIZZERIA" << endl;
			cout << "__________________________________________________________________" << endl;

			CHECK_OUT = true;
		}
	}
	

	
	
}