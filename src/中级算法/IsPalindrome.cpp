//
// Created by steve on 18-8-9.
//

#include "IsPalindrome.h"

bool Solution::isPalindrome(int x) {
    if (x < 0) return false;
    if (x >= 0 && x <= 9) return true;
    int reverse = 0;
    int init = x;
    while (true){
        reverse = x%10+10*reverse;
        x = x/10;
        if(x == 0) break;
    }
    return init == reverse;
}
