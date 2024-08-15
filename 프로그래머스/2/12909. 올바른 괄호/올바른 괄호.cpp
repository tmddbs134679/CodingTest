#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
     bool answer = true;

    stack<int> stk;
    int cnt = 0;
    for (auto check : s)
    {
        stk.push(check);

        if (stk.top() == '(')
        {
            cnt++;
        }
        else
        {
            if (cnt <= 0)
            {
                return false;
            }
            else
            {
                stk.pop();
                stk.pop();
                cnt--;
            }
        }


    }
    if (!stk.empty())
        return false;


    return answer;
}