#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(int brown, int red) 
{
    vector<int> answer;

    int total = brown + red; 

    for (int i = 1; i <= sqrt(total); ++i) 
    {
        if (total % i == 0) 
        {
            int row = total / i; 
            int col = i; 

        
            int brown_check = (row * 2) + (col - 2) * 2;
            if (brown == brown_check) 
            {
                answer.push_back(row);
                answer.push_back(col);
                break;
            }
        }
    }

    return answer;
}