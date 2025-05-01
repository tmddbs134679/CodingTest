#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(int x, int y, int n) 
{
    int answer = 0;
    vector<int> dp(y + 1, INT32_MAX);
    dp[x] = 0;
    
    for(int i = x; i <= y; ++i)
    {
        if(dp[i] == INT32_MAX)
            continue;
        
        if(i + n <= y) dp[i + n] = min(dp[i + n], dp[i] + 1);
        if(i * 2 <= y) dp[i * 2] = min(dp[i * 2], dp[i] + 1);
        if(i * 3 <= y) dp[i * 3] = min(dp[i * 3], dp[i] + 1);
    }
    
    
    return dp[y] == INT32_MAX ? -1 : dp[y];
}