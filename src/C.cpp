//
// Created by steve on 18-8-11.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    while (cin >> N >> K && (N != EOF || K != EOF)) {
        char str[N + 1];
        cin >> str;
        int result = 0;
        if (K == 0) {
            for (int i = 0; i < N; ++i) {
                if (str[i] == '1') result++;
                else break;
            }
        } else if (K == N - 1) {
            for (int i = 0; i < N; ++i) {
                if (str[i] == '1') result++;
            }
        } else {
            //处理K>=1 且 K<=N-1的情况
            int mark[N];
        }
        cout << result << endl;
    }
    return 0;
}