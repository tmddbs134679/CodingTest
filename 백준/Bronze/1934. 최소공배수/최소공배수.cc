#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;



int GCD(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b) 
{
    return a * b / GCD(a, b);
}

int main()
{
    int T;
    cin >> T;

    while (T--) 
    {
        int A, B;
        cin >> A >> B;

       
        cout << LCM(A, B) << endl;
    }



    return 0;
}