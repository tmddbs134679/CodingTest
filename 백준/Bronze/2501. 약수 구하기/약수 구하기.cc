#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main() 
{

    int p, q;

    int cnt = 0;

    cin >> p >> q;


  
    for (int i = 1; i <= p; ++i)
    {
        if (p % i == 0)
        {
            cnt++;
            
            if (cnt == q)
            {
                cout << i;
                return 0;

            }
        }
    }

    if (q > cnt)
        cout << "0";



    return 0;
}
