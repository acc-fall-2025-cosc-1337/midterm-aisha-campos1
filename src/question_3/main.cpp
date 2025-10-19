#include <iostream>
#include "question3.h"
int main()
{   int num;

    while(true){
        cout << "Enter a decimal nummber or 0 to exit: ";
        cin >> num;
        if (num == 0) {
            cout << "Exiting program." << endl;
            break;  
    
        }
        if (num < 1 || num > 512) {
            cout << "Please enter a number between 1 & 512.\n";
            continue;
        } 
        string hexDigit = decimal_to_hex(num);
        cout << "The hexadecimal value is: " << hexDigit << endl;
    }

    return 0;
}