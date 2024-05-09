#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int countOfTriplets(int number[], size_t number_len, int sum, size_t index, int count) 
{
    if (count == 3) 
    {
        if (sum == 0) 
        {
            return 1;
        }
        return 0;
    }

    int result = 0;
    for (size_t i = index; i < number_len; ++i) 
    {
        result += countOfTriplets(number, number_len, sum + number[i], i + 1, count + 1);
    }

    return result;
}

int solution(int number[], size_t number_len)
{
    int answer = 0;
    int sum = 0;

    answer = countOfTriplets(number, number_len, sum, 0, 0);

    return answer;
}
