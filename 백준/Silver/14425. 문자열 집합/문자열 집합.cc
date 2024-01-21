#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;


int main()
{
    int N, M;
   
    cin >> N >> M;

    int result = 0;

    unordered_set<string> setstr;



    for (int i = 0; i < N; ++i)    
    {
        string s;

        cin >> s;
        setstr.insert(s);

    }

    for (int i = 0; i < M; ++i)
    {
        string s;

        cin >> s;

        auto it = setstr.find(s);

        if (it != setstr.end())
        {
            result++;
        }
    }

    cout << result;




    return 0;
}