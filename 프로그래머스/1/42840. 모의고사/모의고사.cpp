
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <queue>

#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;

    int Test_Num = answers.size();


    vector<int> one;
    vector<int> two;
    vector<int> th;

    int onenum = 1;
    int twonum = 1;
    int threenum = 3;
 


    for (int i = 0; i < Test_Num; ++i)
    {
        int size = 0;
       
        one.push_back(onenum);

        if (onenum != 5)
            onenum++;
        else onenum = 1;
    }

  
    for (int i = 1; i <= Test_Num; ++i)
    {

        if (i % 2)
        {
            two.push_back(2);
        }
        else
        {
            two.push_back(twonum);

            if (twonum == 5)
            {
                twonum = 1;
            }
            else if (twonum == 1)
            {
                twonum += 2;
            }
            else
            {
                twonum++;
            }
        }

    }


    int pattern[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    for (int i = 0; i < Test_Num; ++i) 
    {
        th.push_back(pattern[i % 10]);
    }


    int OneCount = 0;
    int TwoCount = 0;
    int ThreeCount = 0;


    for (int i = 0; i < Test_Num; ++i)
    {
        if (one[i] == answers[i])
        {
            OneCount++;
        }

        if (two[i] == answers[i])
        {
            TwoCount++;
        }

        if (th[i] == answers[i])
        {
            ThreeCount++;
        }

    }

    int max_count = max(OneCount, max(TwoCount, ThreeCount));

    if (max_count == OneCount) answer.push_back(1);
    if (max_count == TwoCount) answer.push_back(2);
    if (max_count == ThreeCount) answer.push_back(3);

   
    sort(answer.begin(), answer.end());

    int as = 0;

    return answer;
}

