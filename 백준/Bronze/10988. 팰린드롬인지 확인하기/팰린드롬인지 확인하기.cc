#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   
    string N;
    string Re;

    cin >> N;
    
    Re = N;

   reverse(Re.begin(), Re.end());


   if (N == Re)
       cout << 1;
   else
   {
       cout << 0;
   }
   


    return 0;

}
