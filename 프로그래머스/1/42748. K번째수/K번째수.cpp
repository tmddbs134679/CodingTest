

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
    vector<int> answer;

    for(auto test : commands)
    {
        int start = test[0];
        int end = test[1];

        vector<int> newarr(array.begin() + start - 1, array.begin() + end);

        sort(newarr.begin(), newarr.end());


        
        answer.push_back(newarr[test[2] - 1]);

    }



    return answer;
}
