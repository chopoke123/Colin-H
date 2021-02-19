#include <iostream>
#include <string>
using namespace std;

void Program1()
{
    int count = 0;

    while (count <= 20)
    {
        cout << count << " ";
        count = count + 1;
    }
}

void Program2()
{
    int count = 1;

    while (count <= 128)
    {
        cout << count << " ";
        count = count * 2;
    }
}

void Program3()
{
    bool done = false;
    int choice;

    while (!done)
    {
        cout << "Choose a color:" << endl;
        cout << "1. Red" << endl;
        cout << "2. Blue" << endl;
        cout << "3. Quit" << endl;
        cin >> choice; 

        
       
            if (choice == 1)
            {
                cout << "You chose the color red." << endl << endl;
            }
            else if (choice == 2)
            {
                cout << "You chose the color blue." << endl << endl;
            }
            else if (choice == 3)
            {
                done = true;
            }
            else if (choice > 3)
            {
                cout << "Your choice is invalid please try again." << endl << endl;
            }
        
        
    }
}

void Program4()
{
    bool done = false;
    int guess;
    int num = rand() % 10;

    while (!done)
    {
        cout << "Guess a number: ";
        cin >> guess;
        
        if (guess < num)
        {
            cout << "Too low!" << endl;
        }
        else if (guess > num )
        {
            cout << "Too high!" << endl;
        }
        else if (guess == num)
        {
            cout << "That's right!" << endl;
            cout << endl << "GAMEOVER";
            done = true;

        }
    }
}

void Program5()
{
    int choice;

    cout << "Please eneter a number between 1 and 5: ";
    cin >> choice;

    while (choice < 1 || choice > 5)
    {
        cout << "Invalide entry, try again: ";
        cin >> choice;
    }

    cout << "Thank You.";
}

void Program6()
{
    int sum = 0;
    int counter = 1;
    int n;

    cout << "Enter a value for n: " << endl;
    cin >> n;

    while (counter <= n)
    {
        sum = sum + counter;
        counter = counter + 1;
        cout << "Sum: " << sum << endl;
    }
}

// Don't modify main
int main()
{
    while (true)
    {
        cout << "Run which program? (1-6): ";
        int choice;
        cin >> choice;

        cout << endl << endl;
        cout << "------------------------------" << endl;

        if (choice == 1) { Program1(); }
        else if (choice == 2) { Program2(); }
        else if (choice == 3) { Program3(); }
        else if (choice == 4) { Program4(); }
        else if (choice == 5) { Program5(); }
        else if (choice == 6) { Program6(); }

        cout << endl << endl;
        cout << "------------------------------" << endl;
    }

    return 0;
}