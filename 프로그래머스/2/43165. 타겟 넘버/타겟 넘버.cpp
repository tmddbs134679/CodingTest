#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 0;

void DFS(vector<int>& numbers, int target, int count , int result)
{
    if (count == numbers.size())
    {
        if (result == target)
        {
            answer++;
        }
        return;
    }

    DFS(numbers, target, count + 1, result + numbers[count]);
    DFS(numbers, target, count + 1, result - numbers[count]);

}


int solution(vector<int> numbers, int target)
{
  
    DFS(numbers, target, 0, 0);
   
    return answer;
}
