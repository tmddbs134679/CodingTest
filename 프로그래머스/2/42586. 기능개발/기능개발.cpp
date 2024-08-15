#include <string>
#include <vector>
#include <queue>



using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
   vector<int> answer;

    queue<int> qe;
    for (int i = 0; i < speeds.size(); ++i)
    {
        int per = progresses[i];
        int cnt = 0;
        while (per < 100)
        {
            per += speeds[i];
            cnt++;
        }

        qe.push(cnt);
    }

    while (!qe.empty())
    {
        int result = 1;
        int pre = qe.front();
        qe.pop();
        
        while (pre >= qe.front())
        {
            result++;
            qe.pop();
            if (qe.empty())
                break;
        }
        answer.push_back(result);
    }


    return answer;
}