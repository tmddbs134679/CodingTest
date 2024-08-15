#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    for(int du : arr)
    {
        if(answer.empty() || answer.back() != du)
        {
            answer.push_back(du);
        }
    
    }

    
    return answer;
}