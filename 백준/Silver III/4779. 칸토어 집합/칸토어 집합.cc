#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void cantor(string& s, int start, int end, int level) 
{
    if (level == 0) return; 

    int third = (end - start) / 3;

   
    for (int i = start + third; i < start + 2 * third; ++i)
    {
        s[i] = ' ';
    }
   
    cantor(s, start, start + third, level - 1);
    cantor(s, start + 2 * third, end, level - 1);
}

int main() 
{
    int N;
    while (cin >> N)
    {
        int size = pow(3, N);
        string set(size, '-');

        cantor(set, 0, size, N);

        cout << set << endl;
    }
    return 0;
}