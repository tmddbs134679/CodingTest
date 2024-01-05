#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   

    vector<int> arr(6);

    for (int i = 0; i < 6; ++i)
    {
        int N;
        cin >> N;

        arr[i] = N;

    }
    

    for (int i = 0; i < 6; ++i)
    {
        if (i == 0)
        {
            cout << 1 - arr[i] << " ";
        }
        else if (i == 0)
        {
            cout << 1 - arr[i] << " ";
        }
        else if (i == 1)
        {
            cout << 1 - arr[i] << " ";
        }
        else if (i == 2)
        {
            cout << 2 - arr[i] << " ";
        }
        else if (i == 3)
        {
            cout << 2 - arr[i] << " ";
        }
        else if (i == 4)
        {
            cout << 2 - arr[i] << " ";
        }
        else
        {
            cout << 8 - arr[i] << " ";
        }


    }
    


    return 0;

}
