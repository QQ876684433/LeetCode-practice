//
// Created by steve on 18-8-11.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    while (cin >> N && N != EOF) {

        int *lengths = new int[N];
        for (int i = 0; i < N; ++i) {
            cin >> lengths[i];
        }
        int result = -1;

        if (N <= 2) {
            cout << -1 << endl;
            continue;
        }

        sort(lengths, lengths + N);
        for (int j = N - 1; j >= 2; j--) {
            if (lengths[j] >= lengths[j - 1] + lengths[j - 2]) continue;
            else {
                result = lengths[j] + lengths[j - 1] + lengths[j - 2];
                break;
            }
        }

        cout << result << endl;
    }
    return 0;
}