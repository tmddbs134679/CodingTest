#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) 
{
    std::istringstream is(s);
    std::vector<int> nums;
    
    int num;
    
    while(is >> num)
    {
        nums.push_back(num);
    }
    
    if(!nums.empty())
    {
        int maxnum = *max_element(nums.begin(), nums.end());
        int minnum = *min_element(nums.begin(), nums.end());
    }
    
  
    string answer = "";
    
    answer = to_string(maxnum) + " " + to_string(minnum);
    return answer;
}