#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) 
{
   
    double answer = 0;
    
    for(auto test : arr)
    {
        answer += test;
    }
    return answer / arr.size();
}
