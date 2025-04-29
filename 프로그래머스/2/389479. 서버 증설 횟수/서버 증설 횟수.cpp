#include <string>
#include <vector>
#include <queue>
using namespace std;


int solution(vector<int> players, int m, int k)
{
    int answer = 0;
    queue<int> server;

    for (int i = 0; i < 24; i++)
    {
        while (!server.empty() && server.front() <= i)
        {
            server.pop();
        }
       
        int serverCheckCount = players[i] / m;
        
 
            if (server.size() < serverCheckCount)
            {
                serverCheckCount -= server.size();
                answer += serverCheckCount;
                for (int j= 0; j < serverCheckCount; j++)
                {
                    server.push(i + k);
                   
                }
            }
        

    }


    
    return answer;
}