#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
    int answer = 1;
    map<string, int> cl_map;
    
    for(auto test : clothes)
    {
        cl_map[test[1]]++;
    }
    
    for(auto test : cl_map)
    {
        answer *= test.second + 1;
    }
    
    return answer - 1;
}