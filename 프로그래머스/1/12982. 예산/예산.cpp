#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget)
{
   
    sort(d.begin(), d.end());

    int answer = 0;
    int sum = 0;
    for (int amount : d) 
    {
        
        if (sum + amount <= budget) 
        {
            sum += amount;
            answer++;
        } else 
        {
           
            break;
        }
    }

    return answer;
}