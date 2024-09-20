#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int B[1000];
    int C[1000];

    for (int i = 0; i < N; i++) {
        cin >> B[i] >> C[i];
    }

    int count = 0;
    int remaining[1000];
    int remainingCount = 0;

    for (int i = 1; i < N; i++) {
        if (B[i] == C[i]) {
            count++;
        } else {
            remaining[remainingCount++] = C[i] - B[i];
        }
    }

    sort(remaining, remaining + remainingCount, greater<int>());

    int i = 0;
    while (i < remainingCount) {
        int curr = remaining[i];
        count++;
        i++;

        while (curr > 0 && i < remainingCount) {
            if (curr >= remaining[i]) {
                curr -= remaining[i];
                i++;
            } else {
                remaining[i] -= curr;
                curr = 0;
            }
        }
    }

    cout << count ;

    return 0;
}
