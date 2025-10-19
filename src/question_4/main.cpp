#include <iostream>
#include "question4.h"
using namespace std;

int main()
{
    char choice;
    do {
        cout << "Roll the dice? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            int result = roll_dice();
            cout << "You rolled a" << result << "!" << endl;
        } while (choice == 'y' || choice == 'Y');

        cout << "Goodbye!" << endl;
    }

    return 0;
}