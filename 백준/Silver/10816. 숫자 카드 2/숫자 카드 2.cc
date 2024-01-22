#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>

using namespace std;


int main() 
{

    cin.tie(0);
    ios::sync_with_stdio(false);


    map<int, int> card;
   

    int N;
    
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;
        card[num]++;
    }
  
    int M;

    cin >> M;

    for (int i = 0; i < M; ++i)
    {
        int a;
        cin >> a;
       
        cout << card[a] << " ";
    }

    return 0;
}