

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <queue>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int _num)
{
    if (_num <= 1)
        return false;

    for (int i = 2; i <= sqrt(_num); ++i)
    {
        if (_num % i  == 0)
            return false;
    }

    return true;
}

int solution(string numbers)
{
    int answer = 0;
 
    set<int> iset;

 
    sort(numbers.begin(), numbers.end());


    do
    {
        string str;

        for (int i = 0; i < numbers.size(); ++i)
        {
            str += numbers[i];

            int number = stoi(str);
            if (isPrime(number))
            {
                iset.insert(stoi(str));
            }
        }
    } while (next_permutation(numbers.begin(), numbers.end()));

    answer = iset.size();
    
    return answer;
}