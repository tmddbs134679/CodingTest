#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) 
{
    string answer = "";
    vector<int> vec;
   
    for(int i = 1; i < food.size(); ++i)
    {
        if(food[i] % 2 != 0)
        {
            food[i] -= 1;
        }
        
        int num = food[i] / 2;
        
        vec.push_back(num);
        
    }
    
    for(int i = 0; i < vec.size(); ++i)
    {
        if(vec[i] != 0)
        {
            string s = to_string(i + 1);
            int pre = vec[i];
            while(pre--)
            {
                answer += s;
            }
        }
    }
    
    answer += "0";
    
    
    
    for(int i = vec.size(); i > 0; --i)
    {
        if(vec[i - 1] != 0)
        {
            string s = to_string(i);
            int pre = vec[i - 1];
            while(pre--)
            {
                answer += s;
            }
        }
    }
    return answer;
}