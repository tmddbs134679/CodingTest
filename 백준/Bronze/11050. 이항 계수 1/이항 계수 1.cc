#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include<vector>

using namespace std;


int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n, k;
    cin >> n >> k;

  
    int result = factorial(n) / (factorial(k) * factorial(n - k));

   cout << result << std::endl;

    return 0;
}