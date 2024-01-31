#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    deque<int> de;

    for (int i = 1; i <= n; ++i)
    {
        de.push_back(i);
    }


    while (!(de.size() == 1))
    {
        de.pop_front();

        de.push_back(de.front());

        de.pop_front();
    }
    

    cout << de[0];

    return 0;
}