//
// Created by Pharrell_WANG on 18/1/2018.
//

#ifndef SWORD_OF_OFFER_DECIMALTOANY_H
#define SWORD_OF_OFFER_DECIMALTOANY_H

#include "iostream"
#include <map>;
#include <string>;

using namespace std;

class DecimalToAny {
public:
    void convertDecimalToAny (int num, int any) {
        // num is the input decimal number which will be converted
        // any is one of the value in [2, 8, 16]

        std::map<int, std::string> mapOfWords;
        mapOfWords[2] = "binary";
        mapOfWords[8] = "octal";
        mapOfWords[16] = "hexadecimal";

        const int SIZE = 1000;
        int rem; // remainder
        int idx = 0; // array index
        int s[SIZE]; // int array

        cout << num << " (decimal) = ";

        // conversion happens here;
        // the results are stored in the array s.
        while (num!=0) {
            rem = num % any;
            num = num / any;
            idx ++;
            s[idx] = rem;
        }

        // cout the result
        for (int i=idx; idx>=1; idx--){
            if(s[idx]>=10){
                cout << (char)(s[idx]+55);
            } else {
                cout << s[idx];
            }
        }

        cout << " (" << mapOfWords[any] << ")" << endl;
    }
};

#endif //SWORD_OF_OFFER_DECIMALTOANY_H
