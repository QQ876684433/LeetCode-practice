//
// Created by steve on 18-8-12.
//
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int> &height) {
        if (height.size() == 2) return height[0] > height[1] ? height[1] : height[0];
        int max = 0;
        int temp = 0;
        for (int i = 0; i < height.size(); ++i) {
            for (int j = i+1; j < height.size(); ++j) {
                int h = height[j]>height[i]?height[i]:height[j];
                temp = h*(j-i);
                if (temp>max) max = temp;
            }
        }
        return max;
    }
};