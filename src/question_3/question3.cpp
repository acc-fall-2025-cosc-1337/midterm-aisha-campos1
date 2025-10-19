#include "question3.h"

bool test_config()
{
    return true;
}
string decimal_to_hex(int value)
{ if (value == 0) return "0";
    string hexDigits = "0123456789ABCDEF";
    string result;

    while (value > 0) {
        int remainder = value % 16;
        result = hexDigits[remainder] + result;
        value /= 16;

    }
    return result;}
    