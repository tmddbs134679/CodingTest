#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<char> st;
    st.push(s[0]);
    
    if(st.top() == ')')
        return false;
    
    for(int i = 1; i < s.size(); i++)
    {
        
        if(!st.empty())
        {
            char front = st.top();
        
            if(s[i] == '(')
            {
                st.push(s[i]);
                continue;
            }
            else
            {
                st.pop();
            }
        }
        else
        {
            if(s[i] == ')')
                return false;
            else
                st.push(s[i]);
        }
    }
  if(!st.empty())
            return false;
    
    return answer;
}