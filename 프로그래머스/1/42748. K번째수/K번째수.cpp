#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <stack>
#include <algorithm> 


using namespace std;


vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    int count = commands.size();

    for (int i = 0; i < count; i++)
    {
        vector<int> newvec(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);

        if(newvec.size() >= 2)
        sort(newvec.begin(), newvec.end());

        answer.push_back(newvec[commands[i][2] - 1]);
    }
    
    return answer;
}

