#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    set<string> s_str;

    

    int result = 0;


    while (N--)
    {
        string s;
        cin >> s;

        if (s == "ENTER")
        {
            result += s_str.size();
            s_str.clear();
            continue;
        }
        else
        {
            s_str.insert(s);
            
        }
    }

    result += s_str.size();


    cout << result << endl;

    

    return 0;
}