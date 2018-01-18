//
// Created by Pharrell_WANG on 18/1/2018.
//

#ifndef SWORD_OF_OFFER_DECIMALTOBINARY_H
#define SWORD_OF_OFFER_DECIMALTOBINARY_H

#include<iostream>
using namespace std;

class DecimalToBinary {
public:
    void convertDecimalToBinary(int num)
    {
        int rem;

        if (num<=1)
        {
            cout << num;
            return;
        }
        rem = num % 2;
        convertDecimalToBinary(num / 2);
        // `/`: 取整舍余, get the integer part

        // `%`: reminder operator in C++, 取余舍整, get the remainder
        // 7 % 3 = 1  // dividend % divisor = remainder
        // read it as: remainder of division of 7 by 3

        // Details:
        // There is a difference between modulus and remainder. For example:
        // -21 mod 4 is 3 because -21 + 4 x 6 is 3.
        // But -21 divided by 4 gives -5 with a remainder of -1 because -21 - (-5 x 4) = -1
        // for positive values, there is no difference.
        // in C++, -21 % 4 = -1, hence, `%` is reminder operator, not modulus operator

        // Interesting:
        // int c=11, d=5;
        // cout << (c/d) * d + c % d; // gives you the value of c

        cout << rem;
    }
};
#endif //SWORD_OF_OFFER_DECIMALTOBINARY_H
