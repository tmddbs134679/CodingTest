#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) 
    {
        int N, M;
        cin >> N >> M;

      
        vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));

       
        for (int i = 1; i <= M; ++i) 
        {
            dp[1][i] = i;
        }


        for (int i = 2; i <= N; ++i)
        {
            for (int j = i; j <= M; ++j)
            {
                dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
            }
        }

     
        cout << dp[N][M] << "\n";
    }

    return 0;
}