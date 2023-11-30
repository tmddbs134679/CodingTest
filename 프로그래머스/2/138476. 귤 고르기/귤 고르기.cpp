#include <string>
#include <vector>
#include <algorithm>


using namespace std;


bool compareDesc(int a, int b) 
{
    return a > b;
}

int solution(int k, vector<int> tangerine) 
{
    int answer = 0;
    
    const int MAX_VALUE = 10000000;
    std::vector<long long> arr(MAX_VALUE + 1, 0);

    for (auto test : tangerine) 
    {
        arr[test]++;
    }

    sort(arr.begin(),arr.end(),compareDesc);


    while (k > 0)
    {
        static int i=0;
         answer++;
        k -= arr[i];
        i++;

    }

    return answer;
}