#include <string>
#include <vector>
#include <algorithm>
#include <stack> 

using namespace std;


string leftRotate(string s) 
{
    char temp = s[0]; 

    for (int i = 1; i < s.length(); i++) 
    {
        s[i - 1] = s[i]; 
    }

    s[s.length() - 1] = temp; 
    return s;
}

int solution(string s)
{
    int sLen = s.length() - 1;
    stack<char> st;

    int answer = 0;

    bool b_in = false;

    int cnt = 0;

    while (cnt <= sLen)
    {
         for (int i = 0; i < s.length(); i++)
       {
            if(s[i] == '[' || s[i] == '(' || s[i] == '{' )
            {
                st.push(s[i]);
                continue;
            }

            b_in =false;

            if(st.empty())
            break;

            if(st.top() == '[' && s[i] == ']')
            {
                b_in = true;
                st.pop();
            }
            else if(st.top() == '{' && s[i] == '}')
            {
                b_in = true;
                st.pop();
            }
            else if(st.top() == '(' && s[i] == ')')
            {
                b_in = true;
               st.pop();
            }
        }

        if(st.empty() && b_in)
       {
            answer++;
            b_in =false;
       }
       cnt++;

       s = leftRotate(s);

    }

      
    return answer;
    
}