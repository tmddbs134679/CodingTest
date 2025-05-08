#include <string>
#include <vector>

using namespace std;


int solution(int n, int m, vector<int> section)
{
    int answer = 0;

    int idx = 0;

    while (idx < section.size())
    {
        int area = section[idx];

        answer++;

        while (idx < section.size() && area + m > section[idx])
        {
            idx++;
        }

    }
    return answer;
}