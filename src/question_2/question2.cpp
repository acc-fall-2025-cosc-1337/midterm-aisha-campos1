#include "question2.h"

bool test_config()
{
    return true;
}
double get_kinetic_energy(double mass, double velocity){
 if (mass < 0 || velocity < 0){
        return 0.0;
    } else {
        return 0.5 * mass * velocity * velocity;
    }
}