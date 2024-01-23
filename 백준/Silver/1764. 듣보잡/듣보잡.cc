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

    vector<string> lis(N);
    vector<string> see(M);
    vector<string> result;


    for (int i = 0; i < N; ++i)
    {
        cin >> lis[i]; 
    }

    for (int i = 0; i < M ; ++i)
    {
        cin >> see[i];
    }
   

    sort(lis.begin(), lis.end());
    sort(see.begin(), see.end());

    for (auto test : see)
    {
        if (binary_search(lis.begin(), lis.end(), test))
        {
            result.push_back(test);
        }
           
    }

    cout << result.size() << endl;

    for (auto test : result)
    {
        cout << test << endl;
    }


    return 0;
}

