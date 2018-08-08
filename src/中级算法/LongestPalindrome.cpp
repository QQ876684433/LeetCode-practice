//
// Created by steve on 18-8-8.
//

#include <cstring>
#include "LongestPalindrome.h"


string Solution::longestPalindrome(string s) {
    if (s.length() <= 1)
        return s;
    if (s.length() == 2)
        if (s[0] == s[1]) {
            return s;
        } else {
            string str = {s[0]};
            return str;
        }

    int max = 1;
    int length;
    int left = 0, right = 0;

    for (int i = 1; i < s.length(); ++i) {
        int k = 1;
        length = 1;
        while (i - k >= 0 && i + k < s.length()) {
            if (s[i - k] == s[i + k]) {
                length += 2;
                if (length > max) {
                    max = length;
                    left = i - k;
                    right = i + k;
                }
                k++;
            } else {
                break;
            }
        }
    }

    for (int j = 0; j < s.length() - 1; j++) {
        int k = 0;
        length = 0;
        while (j - k >= 0 && j + 1 + k < s.length()) {
            if (s[j - k] == s[j + 1 + k]) {
                length += 2;
                if (length > max) {
                    max = length;
                    left = j - k;
                    right = j + k + 1;
                }
                k++;
            } else {
                break;
            }
        }

    }

    string ret = s.substr(left, right - left + 1);
    return ret;
}
