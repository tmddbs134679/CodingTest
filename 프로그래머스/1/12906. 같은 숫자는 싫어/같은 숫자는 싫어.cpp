#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    int preNum = arr[0];
    answer.push_back(preNum);    
    
    for(int i = 1; i < arr.size(); i++)
    {
        if(preNum == arr[i])
            continue;
        
        answer.push_back(arr[i]);
        preNum = arr[i];
    }

    return answer;
}