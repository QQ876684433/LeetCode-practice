//
// Created by steve on 18-8-8.
//

#include <cstdio>
#include "AddTwoNums.h"

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode head;
    head.val = 0;
    head.next = NULL;
    struct ListNode *ptr = &head;

    int digit = 0;
    while (true) {
        int i = digit;
        if (l1 != NULL) {
            i += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            i += l2->val;
            l2 = l2->next;
        }
        ptr->val=i % 10;
        digit = i / 10;

        if (l1 == NULL && l2 == NULL) break;
        else {
            struct ListNode temp;
            temp.next = NULL;
            temp.val =  0;
            ptr->next = &temp;
            ptr = ptr->next;
        }
    }

    return &head;
}
