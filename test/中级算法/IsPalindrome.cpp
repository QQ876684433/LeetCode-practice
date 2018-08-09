//
// Created by steve on 18-8-9.
//

#include "gtest/gtest.h"
#include "../../src/中级算法/IsPalindrome.h"

Solution solution;

TEST(test_is_palindrome, case1) {
    EXPECT_EQ(solution.isPalindrome(121), true);
}

TEST(test_is_palindrome, case2) {
    EXPECT_EQ(solution.isPalindrome(-121), false);
}

TEST(test_is_palindrome, case3) {
    EXPECT_EQ(solution.isPalindrome(10), false);
}

TEST(test_is_palindrome, case4) {
    EXPECT_EQ(solution.isPalindrome(0), true);
}

TEST(test_is_palindrome, case5) {
    EXPECT_EQ(solution.isPalindrome(12321), true);
}

TEST(test_is_palindrome, case6) {
    EXPECT_EQ(solution.isPalindrome(6960), false);
}

TEST(test_is_palindrome, case7) {
    EXPECT_EQ(solution.isPalindrome(11), true);
}

TEST(test_is_palindrome, case8) {
    EXPECT_EQ(solution.isPalindrome(111), true);
}

GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}