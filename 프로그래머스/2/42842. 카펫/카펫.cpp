#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    int total = brown + yellow;


    for (int row = 3; row < total; ++row)
    {
        if (total % row != 0)
            continue;

        int col = total / row;

        int icol = col - 2;
        int irow = row - 2;

        if (col < row) continue;

        if (icol * irow == yellow)
        {
            answer.push_back(col);
            answer.push_back(row);
        }
    }
    

    return answer;
}