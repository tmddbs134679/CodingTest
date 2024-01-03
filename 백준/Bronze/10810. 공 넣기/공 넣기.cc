#include <iostream>

#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int N;
    int M;

    cin >> N >> M;

    vector<stack<int>> baskets(N);

       
    for (int cnt = 0; cnt < M; cnt++)
    {
        int i, j, k;

        cin >> i >> j >> k;

        i -= 1;
        j -= 1;
        for (i; i <= j; ++i)
        {
            baskets[i].push(k);
        }


    }


    for (auto all : baskets)
    {
        if (!all.size())
            cout << "0 ";
        else
            cout << all.top()<<" ";
    }



    return 0;

}

