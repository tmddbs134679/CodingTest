#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int leftCnt = 0;
    int RightCnt =0;

    int i=0;

   while (s[i])
   {
        if(s[i] == '(')
        leftCnt ++;

        if(s[i] == ')')
        {
             RightCnt++;

             if(RightCnt > leftCnt)
             {
                return false;
             }
             else
             {
                answer = true;
             }
        }
         if(RightCnt < leftCnt)
             {
                answer =  false;
             }
          ++i;
   }
    return answer;
}
