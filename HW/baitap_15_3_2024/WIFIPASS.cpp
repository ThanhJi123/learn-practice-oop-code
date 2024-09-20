#include <iostream>
#include <vector>

using namespace std;

pair<int, int> findMaxXY(int N) {
    pair<int, int> result;
    int maxSum = -1;

    for (int X = 1; X <= N; ++X) {
        int Y = (N * N - X) / (X + 1);
        
        if ((N * N - X) % (X + 1) == 0 && Y >= X) {
            int currentSum = X + Y;
            if (currentSum > maxSum) {
                maxSum = currentSum;
                result = make_pair(X, Y);
            }
        }
    }

    return result;
}

int main() {
    int Q;
    cin >> Q;

    vector<int> queries(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> queries[i];
    }

    vector<pair<int, int> > results;
    for (int i = 0; i < Q; ++i) {
        results.push_back(findMaxXY(queries[i]));
    }

    for (int i = 0; i < Q; ++i) {
        cout << results[i].first << results[i].second << endl;
    }

    return 0;
}
