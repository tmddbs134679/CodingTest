#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
  
    stack<char> stk;

    for (auto c : s)
    {
        if (c == '(')
        {
            stk.push(c);
        }
        else
        {
            if (stk.empty())
                return false;

            stk.pop();
        }
    }


    return stk.empty();
}