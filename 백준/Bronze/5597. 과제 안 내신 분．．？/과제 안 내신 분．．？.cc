#include <iostream>

#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int N = 30;
   

  
    vector<int> arr(N + 1);

    for (int i = 1; i <= N - 2 ; ++i)
    {
        int M;
        cin >> M;

        arr[M] = M;
    }


    for (int i = 1; i <= N; ++i)
    {
        if (!(arr[i]))
            cout << i << endl;
    }
    


    return 0;

}
