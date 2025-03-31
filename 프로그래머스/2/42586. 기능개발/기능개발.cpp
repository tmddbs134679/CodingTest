#include <string>
#include <vector>
#include <queue>
#include <iostream>


using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    vector<int> days;

    // 기능 완료까지 남은 일수 계산
    for (int i = 0; i < progresses.size(); i++)
    {
        int remain = (100 - progresses[i] + speeds[i] - 1) / speeds[i]; // 올림 계산
        days.push_back(remain);
    }

    int deploy_day = days[0];
    int count = 1;

    for (int i = 1; i < days.size(); i++)
    {
        if (days[i] <= deploy_day)
        {
            count++;
        }
        else
        {
            answer.push_back(count);
            deploy_day = days[i];
            count = 1;
        }
    }

    answer.push_back(count); // 마지막 배포 처리

    return answer;
}



