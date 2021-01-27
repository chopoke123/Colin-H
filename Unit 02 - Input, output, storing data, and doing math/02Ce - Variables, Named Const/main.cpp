#include <iostream>
using namespace std;

int main()
{
	float batches;
	const float CUPS_BUTTER = 1;
	const float CUPS_WHITE_SUGAR = 1;
	const float CUPS_BROWN_SUGAR = 1;
	const float NUM_EGGS = 2;
	const float TEASPOONS_VANILLA_EXTRACT = 2;
	const float TEASPOONS_BAKING_SODA = 1;
	const float TEASPOONS_HOT_WATER = 2;
	const float TEASPOONS_SALT = .5;
	const float CUPS_FLOUR = 3;
	const float CUPS_CHOCO = 2;


	cout << "Cookie Recipe" << endl;
	cout << "From https://www.allrecipes.com/recipe/10813/best-chocolate-chip-cookies/" << endl;
	cout << endl;
	cout << "How many batches? ";
	cin >> batches;
	cout << "INGREDIENTS" << endl;
	cout << "---------------------------" << endl;
	cout << CUPS_BUTTER * batches << " cup(s) butter, softened" << endl;
	cout << CUPS_WHITE_SUGAR * batches << " cup(s) white sugar" << endl;
	cout << CUPS_BROWN_SUGAR * batches << " cup(s) packed brown sugar" << endl;
	cout << NUM_EGGS * batches << " egg(s)" << endl;
	cout << TEASPOONS_VANILLA_EXTRACT * batches << " teaspoon(s) vanilla extract" << endl;
	cout << TEASPOONS_BAKING_SODA * batches << " teaspoon(s) baking soda" << endl;
	cout << TEASPOONS_HOT_WATER * batches << " teaspoon(s) hot water" << endl;
	cout << TEASPOONS_SALT * batches << " teaspoon(s) salt" << endl;
	cout << CUPS_FLOUR * batches << " cup(s) all-purpose flour" << endl;
	cout << CUPS_CHOCO * batches << " cup(s) semisweet chocolate" << endl;
	cout << endl;
	cout << "---------------------------" << endl;
	cout << endl;
	cout << "INGREDIENTS" << endl;
	cout << "1. Preheat oven to 350 degrees F" << endl;
	cout << endl;
	cout << "2. Cream together the butter, white sugar, and brown sugar until smooth." << endl;
	cout << "   Beat in the eggs one at a time, then stir in the vanilla." << endl;
	cout << "   Dissolve baking soda in hot water. Add to batter along with salt." << endl;
	cout << "   Stir in flour, chocolate chips, and nuts." << endl;
	cout << "   Drop by large spoonfuls onto ungreased pans." << endl;
	cout << endl;
	cout << "3. Bake for about 10 minutes in the preheated oven." << endl;

	cout << "How many batches? ";
	cin >> batches;

	return 0;

}