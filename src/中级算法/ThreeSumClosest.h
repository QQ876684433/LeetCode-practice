//
// Created by steve on 18-8-9.
//

#ifndef LEETCODE_PRACTICE_THREESUMCLOSEST_H
#define LEETCODE_PRACTICE_THREESUMCLOSEST_H

#include <vector>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target);

    int getMax(int arr[3]);

    int getSum(int arr[3]);

    int getMin(int arr[3]);
};

#endif //LEETCODE_PRACTICE_THREESUMCLOSEST_H
