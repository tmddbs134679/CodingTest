#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) 
{
    bool answer = true;
    
    unordered_map<string,int> check;
    
    for(auto test : phone_book)
    {
        check[test] = 1;
    }
    
    for(auto test : phone_book)
    {
        for(int i = 1; i < test.size(); ++i)
        {
            string pre = test.substr(0,i);
            if(check.find(pre) != check.end())
            {
                return false;
            }
        }
    }
    
    return answer;
}