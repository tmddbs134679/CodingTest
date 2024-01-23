#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;


int main() 
{

    cin.tie(0);
    ios::sync_with_stdio(false);


    string s;

    cin >> s;

    unordered_set<string> s_str;


    for (int i = 0; i < s.size(); ++i)
    {
        string add = "";
        for (int j = i; j < s.size(); ++j)
        {
            add += s[j];
            s_str.insert(add);
        }
    }
    cout << s_str.size();

    return 0;

}