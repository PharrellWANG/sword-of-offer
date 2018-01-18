//
// Created by Pharrell_WANG on 18/1/2018.
//
#include <iostream>
using namespace std;

#include "../../Lib/TLibConverter/decimalToBinary.h"
#include "../../Lib/TLibConverter/binaryToDecimal.h"
#include "../../Lib/TLibConverter/decimalToAny.h"

int main() {

    DecimalToBinary decimal2binary;
    decimal2binary.convertDecimalToBinary(1234);

    BinaryToDecimal binary2decimal;
    binary2decimal.convertBinaryToDecimal(111);

    DecimalToAny decimal2any;
    decimal2any.convertDecimalToAny(1234, 2);
    decimal2any.convertDecimalToAny(1234, 8);
    decimal2any.convertDecimalToAny(1234, 16);

    return 0;
}
