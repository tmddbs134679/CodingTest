#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int solution(std::vector<int> people, int limit)
 {
    int answer = 0;
    std::sort(people.begin(), people.end(), std::greater<int>());

    int left = 0;
    int right = people.size() - 1;

    while (left <= right) 
    {
        
        if (people[left] + people[right] <= limit) 
        {
            left++; 
            right--; 
        } else 
        {
          
            left++;
        }
        answer++;
    }

    return answer;
}