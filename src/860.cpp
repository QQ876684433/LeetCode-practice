//
// Created by steve on 18-8-11.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int val[3];

bool pay(vector<int> &vector, int ptr) {
    if (ptr == vector.size()-1) {
        if (vector[ptr] == 5) return true;
        if (vector[ptr] == 10) return val[0]>=1;
        if (vector[ptr] == 20) return val[0] >= 3 || (val[1]>=1&&val[0]>=1);
        return false;
    }
    if (vector[ptr] == 5) {
        val[0] = val[0] + 1;
        return pay(vector, ptr + 1);
    } else if (vector[ptr] == 10) {
        if (val[0] >= 1) {
            val[0] = val[0] - 1;
            val[1] = val[1] + 1;
            return pay(vector, ptr + 1);
        } else {
            return false;
        }
    } else {
        if (val[0] >= 3) {
            val[0] = val[0] - 3;
            val[2] = val[2] + 1;
            bool flag = pay(vector, ptr + 1);
            if (flag) return true;
            else if (val[1] >= 1) {
                val[0] = val[0] + 2;
                val[1] = val[1] - 1;
                return pay(vector, ptr + 1);
            } else return false;
        } else if (val[1] >= 1 && val[0] >= 1) {
            val[0] = val[0] - 1;
            val[1] = val[1] - 1;
            return pay(vector, ptr + 1);
        } else return false;
    }
}

bool lemonadeChange(vector<int> &bills) {
    if (bills.empty()) return true;
    if (bills[0] != 5) return false;
    memset(val, 0, 3);
    return pay(bills, 0);
}

int main() {
//    vector<int> arr = {5, 5, 5, 10, 5, 5, 10, 20, 20, 20};
//    vector<int> arr = {5, 5, 10};
//    vector<int> arr = {10, 10};
//    vector<int> arr = {5,5,10,10,20};
    vector<int> arr = {5,5,5,10,5,5,10,20,20,20};
    bool result = lemonadeChange(arr);
    cout << result << endl;
    return 0;
}
