#include <string>
#include <vector>

using namespace std;

vector<int> Divisor(int number)
{
    vector<int> v;

    for (int i = 1; i <= number; i++)
    {
        int count = 0;

        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (j * j == i)
                    count += 1;  // 제곱근이면 하나만 추가
                else
                    count += 2;  // 짝을 이루는 약수 2개 추가
            }
        }

        v.push_back(count);
    }

    return v;
}


int solution(int number, int limit, int power) 
{
    int answer = 0;
    
    vector<int> container = Divisor(number);
    
    for(auto& num : container)
    {
        if(num > limit)
        {
            num = power;
        }
        
        answer += num;
    }
    
    
    return answer;
}