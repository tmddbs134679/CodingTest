#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int dfs(int k, int cnt, const vector<vector<int>>& dungeons, vector<bool>& visited)
{
    int maxCount = cnt;

    for (int i = 0; i < dungeons.size(); i++)
    {
        if (!visited[i] && k >= dungeons[i][0])
        {
            visited[i] = true;
            maxCount = max(maxCount, dfs(k - dungeons[i][1], cnt + 1, dungeons, visited));
            visited[i] = false;
        }
    }

    return maxCount;
}

int solution(int k, vector<vector<int>> dungeons)
{
    vector<bool> visited(dungeons.size(), false);
    return dfs(k, 0, dungeons, visited);
}