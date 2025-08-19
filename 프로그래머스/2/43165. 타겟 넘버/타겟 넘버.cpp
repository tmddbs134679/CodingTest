#include <string>
#include <vector>

using namespace std;


int dfs(vector<int>& a, int count, int sum, int target)
{
    if(count == a.size())
        return sum == target ? 1 : 0;
    
    return dfs(a, count + 1, sum + a[count], target) + dfs(a, count + 1, sum - a[count], target);
}


int solution(vector<int> numbers, int target) 
{
    return dfs(numbers, 0, 0, target);
}