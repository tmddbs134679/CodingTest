#include <string>
#include <vector>

using namespace std;


int CountOne(int i)
{
    int OneCnt = 0;

    while (i)
    {
        OneCnt += i & 1;
        i >>= 1;
    }
    return OneCnt;

   
}

int solution(int n) 
{
   
    int N_oneCnt = CountOne(n);

    int max = 1000000;

    int answer = n;
    while (1)
    {
       answer++;
       int nCount = CountOne(answer);
       if(nCount == N_oneCnt)
       {
            return answer;
       }

        if(answer == max)
        return -1;
    }
    return answer;
}