#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
    map<string, int> com;

    for (const auto &cs : clothes)
    {
        com[cs[1]]++;


    }

    int answer = 1;

    for (const auto& pair : com)
    {
        answer *= (pair.second + 1);
    }

  
    return answer -1 ;
}