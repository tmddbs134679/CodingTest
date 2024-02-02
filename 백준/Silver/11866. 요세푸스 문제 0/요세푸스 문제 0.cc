#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main() 
{
    int N, K;

    cin >> N >> K;

    queue<int> qu;



    for (int i = 1; i <= N; ++i)
    {
        qu.push(i);
    }



    cout << "<";

    while (!qu.empty()) 
    {
        for (int i = 0; i < K - 1; ++i)
        {
            int front = qu.front();
           qu.pop();
           qu.push(front);
        }
        cout << qu.front();
        qu.pop();
    
        if (!qu.empty())
        {
            cout << ", ";
        }

    }

    cout << ">" << endl;
    
    return 0;
}