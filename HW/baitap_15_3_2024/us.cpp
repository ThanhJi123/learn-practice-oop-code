#include <iostream>
#include <vector>
using namespace std;
const int MAX_N = 1000000; 
int countDivisors[MAX_N + 2];
long long sumDivisors[MAX_N + 2];
void precompute() {
    for (int i = 1; i <= MAX_N; i++) {
        for (int j = i; j <= MAX_N; j += i) {
            countDivisors[j]++;
            sumDivisors[j] += i;
        }
    }
    for (int i = 1; i <= MAX_N; i++) {
        countDivisors[i] += countDivisors[i - 1];
        sumDivisors[i] += sumDivisors[i - 1];
    }
}
int main() {
    precompute();
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        long long u = countDivisors[b] - countDivisors[a - 1];
        long long v = sumDivisors[b] - sumDivisors[a - 1];
        cout << u << " " << v << endl;
    }
    return 0;
}
