#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <algorithm>


using namespace std;

int cnt;

int recursion(string& s, int l, int r) 
{
    cnt++;

    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(string& s)
{
    return recursion(s, 0, size(s) - 1);
}

int main() 
{
    int N;
    cin >> N;

    string s;

    


    while (N--)
    {
        cnt = 0;

        cin >> s;

        cout << isPalindrome(s) << " ";
        cout << cnt << endl;

    }
}
