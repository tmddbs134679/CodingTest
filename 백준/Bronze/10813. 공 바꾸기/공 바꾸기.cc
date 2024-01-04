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

    vector<int> arr(N);

    for (int i = 0; i < N; ++i)
    {
        arr[i] = i + 1;
    }



    for (int cnt = 0; cnt < M; ++cnt)
    {
        int i, j;

        cin >> i >> j;

        i -= 1;
        j -= 1;

        swap(arr[i], arr[j]);
    }



    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }


    return 0;

}