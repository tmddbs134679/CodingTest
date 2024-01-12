#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;


int main()
{
    std::vector<std::string> results;

  
        int n;
        std::cin >> n;

        while (n > 1)
        {
            for (int i = 2; i <= n; i++)
            {
                if (n % i == 0)
                {
                    cout << i << endl;
                    n /= i;
                    i = 1;
                }
            }
        }


        return 0;
    
}
