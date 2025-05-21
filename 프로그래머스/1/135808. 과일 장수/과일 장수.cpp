#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score)
{
    int answer = 0;
    int boxCount = score.size() / m;
    int idx = score.size() - m;
    sort(score.begin(), score.end());

    for (int i = 0; i < boxCount; i++)
    {
        answer += (m * score[idx]);
        idx -= m;
    }


    return answer;
}
