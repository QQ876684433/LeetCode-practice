//
// Created by steve on 18-8-8.
//

#include "gtest/gtest.h"
#include "../../src/中级算法/SumOfThreeNumbers.h"

TEST(test1, case1) {
    EXPECT_EQ(test_case(), 1);
}

TEST(test1, case2) {
    EXPECT_EQ(test_case(), 0);
}

GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}