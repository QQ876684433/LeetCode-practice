//
// Created by steve on 18-8-11.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[6] = {10,3,4,5,8,6};
    sort(a,a+6);
    for (int i = 0; i < 6; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}