#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    
    set<int> s;
    
    sort(numbers.begin(), numbers.end());
    
    for(int i = 0; i <= numbers.size() - 1; ++i)
    {
        for(int j = i + 1; j <= numbers.size() - 1; ++j)
        {
            int num = numbers[i] + numbers[j];
            s.insert(num);
        }
    }
    
    for(auto test : s)
    {
        answer.push_back(test);
    }
    
    return answer;
}