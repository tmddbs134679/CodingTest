#include <iostream>  
#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
    queue<int> q;
    
    for (int i = 0; i < (int)progresses.size(); ++i) 
    {
        int remain = 100 - progresses[i];
        int days = (remain + speeds[i] - 1) / speeds[i]; 
        q.push(days);
    }

    vector<int> answer;
  
    while (!q.empty()) 
    {
        int cur = q.front(); q.pop();
        int cnt = 1;
        while (!q.empty() && q.front() <= cur) 
        {
            q.pop();
            cnt++;
        }
        answer.push_back(cnt);
    }
    return answer;
}