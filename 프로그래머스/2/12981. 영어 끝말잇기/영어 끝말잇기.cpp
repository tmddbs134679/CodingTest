#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

vector<int> solution(int n, vector<string> words) 
{
    vector<int> answer;
    
    string frontword;
    string backword;

    char frontback ;
    char backfront ;

    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 1; j <= n; j++)
        {
            frontword = words[i * n + j - 1];
            frontback = frontword[frontword.length() -1];

        auto result = find(words.begin(), words.begin() + i * n + j - 2, frontword);
        if (result != words.end() && *result == frontword) 
            {
                  answer.push_back(j);
                  answer.push_back(i+1);
                  return answer;
            }

            if(i * n + j >= words.size())
            {
                answer.push_back(0);
                 answer.push_back(0);
                 return answer;
            }

            backword = words[i * n + j];
            backfront = backword.front();

            if(frontback != backfront)
            {
                if(j + 1 > n)
                {
                    answer.push_back(1);
                    answer.push_back(i+2);
                    return answer;
                }
                else
                {
                    answer.push_back(++j);
                    answer.push_back(i+1);
                     return answer;
                }
            }
        }
        
    }
    
    answer.push_back(0);
    answer.push_back(0);
  return answer;
}