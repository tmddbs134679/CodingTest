#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int to_minutes(const string& time) 
{
    return stoi(time.substr(0, 2)) * 60 + stoi(time.substr(3, 2));
}
int solution(vector<vector<string>> book_time)
{
   
    sort(book_time.begin(), book_time.end());

   
    priority_queue<int, vector<int>, greater<int>> pq;

    for (const auto& time : book_time) 
    {
        int start = to_minutes(time[0]);
        int end = to_minutes(time[1]) + 10; 

        
        if (!pq.empty() && pq.top() <= start) 
        {
            pq.pop();
        }

        pq.push(end); 
    }

    return pq.size(); 
}
