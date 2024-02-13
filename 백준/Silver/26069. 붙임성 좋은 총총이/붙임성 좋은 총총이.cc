#include <iostream>
#include <vector>
#include <set>
#include <map>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    set<string> s_str;

    s_str.insert("ChongChong");


    for (int i = 0; i < N; ++i)
    {
        string s, t;

        cin >> s >> t;

        auto it_l  = s_str.find(s);
        auto it_r = s_str.find(t);

        if (it_l != s_str.end())
        {
            s_str.insert(t);
        }
        else if(it_r != s_str.end())
        {
            s_str.insert(s);
        }

    }

    cout << s_str.size() << endl;



    return 0;
}
