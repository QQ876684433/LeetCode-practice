//
// Created by steve on 18-8-8.
//

#include "gtest/gtest.h"
#include "../../src/中级算法/Z_Convert.h"

Solution solution;

TEST(test_z_convert, case1) {
    string str = "PAYPALISHIRING";
    EXPECT_EQ(solution.convert(str, 3), "PAHNAPLSIIGYIR");
}

TEST(test_z_convert, case2) {
    string str = "PAYPALISHIRING";
    EXPECT_EQ(solution.convert(str, 4), "PINALSIGYAHRPI");
}

TEST(test_z_convert, case3) {
    string str = "PAYP";
    EXPECT_EQ(solution.convert(str, 4), "PAYP");
}

TEST(test_z_convert, case4) {
    string str = "PAYP";
    EXPECT_EQ(solution.convert(str, 5), "PAYP");
}

TEST(test_z_convert, case5) {
    string str = "PAYPALISHIRING";
    EXPECT_EQ(solution.convert(str, 5), "PHASIYIRPLIGAN");
}

TEST(test_z_convert, case6) {
    string str = "";
    EXPECT_EQ(solution.convert(str, 5), "");
}

TEST(test_z_convert, case7) {
    string str = "A";
    EXPECT_EQ(solution.convert(str, 5), "A");
}

TEST(test_z_convert, case8) {
    string str = "PAYPALI";
    EXPECT_EQ(solution.convert(str, 5), "PAYIPLA");
}

GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}