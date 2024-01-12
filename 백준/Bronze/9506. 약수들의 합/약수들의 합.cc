#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main() 
{

    while (true) 
    {
        int n;
        std::cin >> n;

        if (n == -1) 
        {
            break;
        }

        std::vector<int> divisors;

        int sum = 0;

        for (int i = 1; i <= n / 2; ++i) 
        {
            if (n % i == 0) {
                divisors.push_back(i);
                sum += i;
            }
        }

        if (sum == n)
        {
            std::cout << n << " = ";
            for (size_t i = 0; i < divisors.size() - 1; ++i) 
            {
                std::cout << divisors[i] << " + ";
            }
            std::cout << divisors.back() << std::endl;
        }
        else 
        {
            std::cout << n << " is NOT perfect." << std::endl;
        }
    }

    return 0;
}