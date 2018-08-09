//
// Created by steve on 18-8-9.
//

#include "Z_Convert.h"

string Solution::convert(string s, int numRows) {
    if (s.length() == 0 || numRows == 1 || numRows >= s.length()) return s;

    char result[s.length() + 1];
    int cycle = 2 * (numRows - 1);
    int distance;
    int result_index = 0;
    for (int i = 0; i < numRows; ++i) {
//        result[result_index++] = s[i];
        distance = cycle - i * 2;
        for (int j = i; j < s.length();) {
            if (distance == 0) {
                distance = cycle - distance;
                continue;
            }
            result[result_index++] = s[j];
            j += distance;
            distance = cycle - distance;
        }
    }
    result[result_index] = 0;
    return result;
}
