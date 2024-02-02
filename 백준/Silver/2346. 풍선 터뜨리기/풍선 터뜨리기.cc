#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include<vector>

using namespace std;

int main() 
{

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);


    int N;

    cin >> N;

    deque<pair<int, int>> de;
    vector<int> result;

   
    
    for (int i = 1; i <= N; ++i)
    {
        int Num;
        cin >> Num;
        de.push_back({i,Num});
    }

    while (!de.empty())
    {
        int fir = de.front().first;
        int se = de.front().second;

        result.push_back(fir);
        de.pop_front();

        if (de.empty())
        {
            break;
        }


    
        if (se > 0)
        {
            while (--se)
            {
                
                de.push_back(de.front());
                de.pop_front();
            }
        }
        else
        {
            while (se++)
            {
                de.push_front(de.back());
                de.pop_back();
            }
        }
       
    }

    for (auto test : result)
    {
        cout << test << ' ';
    }
  
    return 0;
}