#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;

    map<string, int> mart;
 
    for (int i = 0; i < want.size(); ++i)
    {
        mart[want[i]] = number[i];
    }

    // 최대 시작 지점은 discount.size() - 10
    for (int i = 0; i <= discount.size() - 10; ++i)
    {
        map<string, int> pocket;

        // 10일간의 품목을 확인
        for (int j = i; j < i + 10; ++j)
        {
            pocket[discount[j]]++;
        }

        // mart와 pocket이 동일한지 확인
        bool isValid = true;
        for (auto it : mart)
        {
            if (pocket[it.first] != it.second)
            {
                isValid = false;
                break;
            }
        }

      
        if (isValid)
        {
            answer++;
        }
    }

    return answer;
}