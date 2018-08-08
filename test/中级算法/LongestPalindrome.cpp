//
// Created by steve on 18-8-8.
//

#include "gtest/gtest.h"
#include "../../src/中级算法/LongestPalindrome.h"

Solution solution;

TEST(test_LongestPalindrome, case1) {
    EXPECT_EQ(solution.longestPalindrome("babad"),"bab");
}

TEST(test_LongestPalindrome, case2) {
    EXPECT_EQ(solution.longestPalindrome("cbbd"),"bb");
}

TEST(test_LongestPalindrome, case3) {
    EXPECT_EQ(solution.longestPalindrome("abcd"),"a");
}

TEST(test_LongestPalindrome, case4) {
    EXPECT_EQ(solution.longestPalindrome("abcdefedb"),"defed");
}

TEST(test_LongestPalindrome, case5) {
    EXPECT_EQ(solution.longestPalindrome("dddddd"),"dddddd");
}

TEST(test_LongestPalindrome, case6) {
    EXPECT_EQ(solution.longestPalindrome("d"),"d");
}

TEST(test_LongestPalindrome, case7) {
    EXPECT_EQ(solution.longestPalindrome("da"),"d");
}

TEST(test_LongestPalindrome, case8) {
    EXPECT_EQ(solution.longestPalindrome("dd"),"dd");
}

TEST(test_LongestPalindrome, case9) {
    EXPECT_EQ(solution.longestPalindrome("abcdefgfedcba"),"abcdefgfedcba");
}

TEST(test_LongestPalindrome, case10) {
    EXPECT_EQ(solution.longestPalindrome("abcdeffedcba"),"abcdeffedcba");
}

TEST(test_LongestPalindrome, case11) {
    EXPECT_EQ(solution.longestPalindrome("abcdeffedcb"),"bcdeffedcb");
}

TEST(test_LongestPalindrome, case12) {
    EXPECT_EQ(solution.longestPalindrome(""),"");
}

GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}