#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;


    vector<int> arr(N + 1);

    for (int i = 1; i <= N; ++i)
    {
        arr[i] = i;
    }
    
    
    for (int i = 0; i < M; ++i)
    {
        int k, l;

        cin >> k >> l;

        reverse(arr.begin() + k, arr.begin() + l + 1);

    }


    for (int i = 1; i <= N; ++i)
    {
        cout << arr[i] << " ";

    }


    return 0;

}

