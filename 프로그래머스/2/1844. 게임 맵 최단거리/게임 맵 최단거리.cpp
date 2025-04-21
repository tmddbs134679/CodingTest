#include<vector>
#include <queue>

using namespace std;


struct Node 
{
    int x, y, dist;
};

int solution(vector<vector<int>> maps) 
{
    int n = maps.size();
    int m = maps[0].size();

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<Node> q;

    int dx[] = { -1, 1, 0, 0 };
    int dy[] = { 0, 0, -1, 1 };

    q.push({ 0, 0, 1 });
    visited[0][0] = true;

    while (!q.empty())
    {
        Node current = q.front();
        q.pop();

        if (current.x == n - 1 && current.y == m - 1)
            return current.dist;

        for (int i = 0; i < 4; i++) 
        {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if (maps[nx][ny] == 1 && !visited[nx][ny]) 
                {
                    visited[nx][ny] = true;
                    q.push({ nx, ny, current.dist + 1 });
                }
            }
        }
    }

    return -1;
}
