#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
     std::stack<char> st;

    for (char test : s) 
    {
        if (test == '(') 
        {
            st.push(test);
        } 
        else if (test == ')') 
        {
            if (st.empty()) 
            {
                return false;
            }
            st.pop();
        }
    }

    return st.empty(); 
 
}
