#include <string>
#include <vector>
#include <unordered_map>  

using namespace std;

vector<int> solution( string s) 
{
    vector<int> answer;
    unordered_map<char, int> check;

    for (int i = 0; i < s.length(); ++i) 
    {
        char c = s[i];

        if (check.find(c) != check.end())
        {
            int a = check[c];
            answer.push_back(i - check[c]);
        }
        else 
        {
            answer.push_back(-1);
        }
        check[c] = i;
    }

    return answer;
}