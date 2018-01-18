//
// Created by Pharrell_WANG on 18/1/2018.
//

#ifndef SWORD_OF_OFFER_BINARYTODECIMAL_H
#define SWORD_OF_OFFER_BINARYTODECIMAL_H

#include<iostream>
//#include<cmath>
using namespace std;

class BinaryToDecimal {
public:
    void convertBinaryToDecimal(int num)
    {
        // init
        cout << endl;
        int rem;
        int base = 1; // pow(2, 0) = 1
        int dec = 0; // the value of the decimal number
        int ls; // the least significant bit
        int bin = num;

        while ( num > 0 ){
            // get the reminder of division of num by 10,
            // which is equivalent to
            // the least significant bit (ls)
            ls = num % 10;
            // convert the value to decimal, add to `dec`.
            dec += ls * base;
            base *= 2;
            num /= 10;
        }
        cout << "The decimal equivalent of " << bin << ": " << dec << endl;
    }
};

#endif //SWORD_OF_OFFER_BINARYTODECIMAL_H
