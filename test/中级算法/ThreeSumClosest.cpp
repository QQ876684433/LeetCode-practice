//
// Created by steve on 18-8-9.
//

#include "gtest/gtest.h"
#include "../../src/中级算法/ThreeSumClosest.h"

Solution solution;

TEST(test_three_sum_closest, case1) {
    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(-4);
    int target = 1;
    int expected = 2;
    EXPECT_EQ(solution.threeSumClosest(nums, target), expected);
}

TEST(test_three_sum_closest, case2) {
    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(2);
    nums.push_back(1);
    int target = 1000;
    int expected = 2;
    EXPECT_EQ(solution.threeSumClosest(nums, target), expected);
}

TEST(test_three_sum_closest, case3) {
    vector<int> nums = {0,2,1,-3};
            int target = 1;
    int expected = 0;
    EXPECT_EQ(solution.threeSumClosest(nums, target), expected);
}


GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}