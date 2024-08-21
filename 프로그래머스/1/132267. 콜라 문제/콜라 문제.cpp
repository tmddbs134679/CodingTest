#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) 
{
    int answer = 0;
    
    
    while(n >= a)
    {
        int rest = (n / a) * b;
        answer += rest;
        n = rest + (n % a);
    }
    

    return answer;
}