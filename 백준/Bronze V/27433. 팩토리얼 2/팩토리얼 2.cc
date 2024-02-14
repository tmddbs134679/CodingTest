#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <algorithm>


using namespace std;

long long fac(int _n)
{
    if (_n <= 1)
    {
        return 1;
    }
    else
    {
        return _n * fac(_n-1);

    }

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    long long result = fac(N);

    cout << result << endl;



    return 0;
}