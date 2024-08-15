#include  <string>
#include  <vector>
#include  <algorithm>
#include <deque>
#include  <utility>

using namespace std;

int solution(vector<int> priorities, int location) 
{
    int answer = 0;
    deque<std::pair<int, int>> dq;

    
    for (int i = 0; i < priorities.size(); ++i)
    {
        dq.push_back({priorities[i], i});
    }

    while (!dq.empty()) 
    {
        auto current = dq.front();
        dq.pop_front();

        bool has_higher_priority = false;

        
        for (const auto& doc : dq) 
        {
            if (doc.first > current.first) 
            {
                has_higher_priority = true;
                break;
            }
        }

        if (has_higher_priority)
        {
           
            dq.push_back(current);
        } else 
        {
           
            ++answer;
            if (current.second == location) 
            {
                return answer; 
            }
        }
    }

    return answer;
}