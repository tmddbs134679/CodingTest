#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


vector<int> solution(vector<string> keymap, vector<string> targets)
{
    vector<int> answer;

    unordered_map<char, int> minPress;

    for (int i = 0; i < keymap.size(); i++)
    {
        for (int j = 0; j < keymap[i].size(); j++)
        {
            char c = keymap[i][j];

            int press = j + 1;
            if (minPress.count(c) == 0 || minPress[c] > press)
            {
                minPress[c] = press;
            }
        }
    }

    for (const auto& word : targets) 
    {
        int total = 0;
        bool valid = true;
        for (char c : word)
        {
            if (minPress.count(c) == 0) 
            {
                valid = false;
                break;
            }
            total += minPress[c];
        }
        answer.push_back(valid ? total : -1);
    }
    return answer;
}