#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int main() 
{

    cin.tie(0);
    ios::sync_with_stdio(false);


    int N, M;

    cin >> N >> M;

    vector<int> SetA(N);
    vector<int> SetB(M);
    int result = 0;


    for (int i = 0; i < N; ++i)
    {
        cin >> SetA[i];
    }

    for (int i = 0; i < M ; ++i)
    {
        cin >> SetB[i];
    }
   

    sort(SetA.begin(), SetA.end());
    sort(SetB.begin(), SetB.end());

    for (auto test : SetB)
    {
        if (!binary_search(SetA.begin(), SetA.end(), test))
        {
            result++;
        } 
    }


    for (auto test : SetA)
    {
        if (!binary_search(SetB.begin(), SetB.end(), test))
        {
            result++;
        }
    }

    cout << result << endl;




    return 0;
}

