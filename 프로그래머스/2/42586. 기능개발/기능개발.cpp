#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;
vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;

    queue<int> distribution;

    for (int i = 0; i < progresses.size(); ++i)
    {
        int rest = 100 - progresses[i];
        int day = 0;

        while (rest > 0)
        {
            rest -= speeds[i];
            day++;
        }

        distribution.push(day);
    }

    while (!distribution.empty())
    {
        int cnt = 1;
        int cur_progress = distribution.front();
        distribution.pop();


        while (!distribution.empty() && distribution.front() <= cur_progress)
        {
            cnt++;
            distribution.pop();
        }

        answer.push_back(cnt);
    }

    return answer;

}


