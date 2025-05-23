#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int count = 0;
    int other = 0;
    char firstStr = ' ';
    bool isCheck = true;

    for (auto& str : s)
    {
        if (firstStr == str)
            isCheck = true;

        if (isCheck)
        {
            firstStr = str;
            count++;
            isCheck = false;
            continue;
        }

        isCheck = false;
        other++;

        if (other == count)
        {
            answer++;
            count = 0;
            other = 0;
            firstStr = ' ';
            isCheck = true;
        }

    }
    
    if (firstStr != ' ')
        answer++;
    return answer;
}