#include <iostream>
#include <vector>

using namespace std;

int main() {
    int cnt;
    cin >> cnt;

    vector<vector<int>> arr(cnt, vector<int>(4));

    int Q = 25, D = 10, N = 5, P = 1;

    for (int i = 0; i < cnt; ++i) {
        int ch;
        cin >> ch;

        arr[i][0] = ch / Q; // 큰 동전부터 개수 계산
        ch %= Q;

        arr[i][1] = ch / D;
        ch %= D;

        arr[i][2] = ch / N;
        ch %= N;

        arr[i][3] = ch / P;
    }

    for (int i = 0; i < cnt; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}