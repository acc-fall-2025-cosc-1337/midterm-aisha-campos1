#include <iostream>
#include "question1.h"

using namespace std;

int main()
{
    cout << "Enter sales amount: ";
    double sales;
    cin >> sales;
    double commission = get_sales_commission(sales);
    cout << "Sales Commission: $" << commission << endl;

    return 0;
}