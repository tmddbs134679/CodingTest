#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> stk;
    
    for(auto test : arr)
    {
        if(stk.empty())
        {
           stk.push(test); 
        }
        else
        {
            if(stk.top() != test)
            {
                 stk.push(test); 
            }
        }
    }
 
   while (!stk.empty())
   {
        answer.push_back(stk.top());
        stk.pop();
    }
    
   
    std::reverse(answer.begin(), answer.end());
    

    return answer;
}