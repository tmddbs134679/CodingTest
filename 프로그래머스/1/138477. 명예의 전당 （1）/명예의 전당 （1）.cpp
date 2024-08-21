#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) 
{
    vector<int> answer;
    
    vector<int> vec;
        
    for(auto test : score)
    {
        vec.push_back(test);
        sort(vec.begin(),vec.end(), greater<int>());
        vec.size() < k ?  answer.push_back(vec.back()) : answer.push_back(vec[k - 1]);
    
    }
    
    return answer;
}