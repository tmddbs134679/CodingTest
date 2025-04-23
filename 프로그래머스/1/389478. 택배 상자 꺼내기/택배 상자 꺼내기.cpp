#include <string>
#include <vector>

using namespace std;
int solution(int n, int w, int num) 
{
    int answer = 0;


    int targetRow = (num - 1) / w;
    int targetCol = (targetRow % 2 == 0) ? ((num - 1) % w + 1) : (w - (num - 1) % w);

    for (int i = 1; i <= n; ++i)
    {
        int row = (i - 1) / w;
        int col = (row % 2 == 0) ? ((i - 1) % w + 1) : (w - (i - 1) % w);

        if (col == targetCol && row >= targetRow) 
        {
            answer++;
        }
    }

    return answer;
}