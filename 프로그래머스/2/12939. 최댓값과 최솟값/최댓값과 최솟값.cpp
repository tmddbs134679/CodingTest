#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


string solution(string s) 
{
    std::istringstream is(s);
    std::vector<int> nums;
    
    int num;
    int minnum;
    int maxnum;

    while(is >> num)
    {
        nums.push_back(num);
    }
    

    
    if(!nums.empty())
    {
         maxnum = *max_element(nums.begin(), nums.end());
         minnum = *min_element(nums.begin(), nums.end());
    }
    
  
    string answer = "";
    
    answer = to_string(minnum) + " " + to_string(maxnum);
    return answer;
}