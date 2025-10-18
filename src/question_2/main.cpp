#include <iostream>
#include "question2.h"
using namespace std;

int main()
{
    double mass, velocity;
    cout << "enter mass (kg): ";
    cin >> mass;
    cout << "enter velocity (m/s):";
    cin >> velocity;

    double kinetic_energy = get_kinetic_energy(mass, velocity);
    cout<<"Kinetic Energy:" << kinetic_energy << "Joules"<< endl;

    return 0;
}