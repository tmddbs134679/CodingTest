#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{   
	
    const int MOD = 1234567;

    if (n == 0) return 0;
    else if (n == 1) return 1;
    else {
        int prev1 = 0;
        int prev2 = 1;
        int fn = 0;

        for (int i = 2; i <= n; ++i) {
            fn = (prev1 + prev2) % MOD;
            prev1 = prev2;
            prev2 = fn;
        }

        return fn;
    }
}