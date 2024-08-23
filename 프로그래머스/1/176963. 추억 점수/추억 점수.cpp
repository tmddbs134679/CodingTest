#include <string>
#include <vector>
#include <map>

using namespace std;


vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo)
{
    vector<int> answer;
    map<string, int> mismap;

    for (int i = 0; i < yearning.size(); ++i)
    {
        mismap.insert(make_pair(name[i], yearning[i]));
    }

    for (int i = 0; i < photo.size(); ++i)
    {
        int point = 0;
        for (int j = 0; j < photo[i].size(); ++j)
        {
            auto it = mismap.find(photo[i][j]);

            if (it != mismap.end() && it->first == photo[i][j])
            {
                point += it->second;
            }
        }
        answer.push_back(point);
    }

    return answer;
}