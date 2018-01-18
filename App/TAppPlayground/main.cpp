#include <iostream>
//#include <sstream>
//#include <vector>
//#include <math.h>
//#include <stack>
#include "../../Lib/TLibConverter/decimalToAny.h"
using namespace std;



int main() {
    int a = 38;
    int b = 27;
    int c = a ^ b;
    DecimalToAny decimalToAny;
    decimalToAny.convertDecimalToAny(c, 2);
    cout<< c <<endl;
    return 0;
}