#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;
    
    for(auto cm : commands)
    {
        vector<int> newans(array.begin() + cm[0] -1 , array.begin() + cm[1]);
        
        sort(newans.begin(), newans.end());
        
        answer.push_back(newans[cm[2] - 1]);
    }
    
    
    return answer;
}