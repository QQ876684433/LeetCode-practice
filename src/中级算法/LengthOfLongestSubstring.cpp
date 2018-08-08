//
// Created by steve on 18-8-8.
//

#include <cstring>
#include "LengthOfLongestSubstring.h"

int lengthOfLongestSubstring(char *s) {
    int ascii[128];
    memset(ascii, -1, sizeof(ascii));
    int left = 0;
    int max = 0;
    int i;
    int length=0;
    for (i = 0; i < strlen(s); ++i) {
        if (ascii[s[i]] >= left) {
            length = i-ascii[s[i]];
            left = ascii[s[i]];
        } else{
            length++;
        }
        ascii[s[i]] = i;
        if (length > max) max = length;
    }
    return max;
}

