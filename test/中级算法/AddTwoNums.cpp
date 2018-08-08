//
// Created by steve on 18-8-8.
//

#include "gtest/gtest.h"
#include "../../src/中级算法/AddTwoNums.h"

TEST(test1, case1) {
    struct ListNode l1;
    l1.val = 2;
    struct ListNode l2;
    l2.val = 4;
    struct ListNode l3;
    l3.val = 3;
    l1.next = &l2;
    l2.next = &l3;
    l3.next = NULL;
    struct ListNode ll1;
    ll1.val = 5;
    struct ListNode ll2;
    ll2.val = 6;
    struct ListNode ll3;
    ll3.val = 4;
    ll1.next = &ll2;
    ll2.next = &ll3;
    ll3.next = NULL;
    int actual = 0;
    struct ListNode *result = addTwoNumbers(&l1, &ll1);
    while (true) {
        actual = actual * 10 + result->val;
        if (result->next != NULL) result = result->next;
        else break;
    }
    EXPECT_EQ(708, actual);
}

GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}