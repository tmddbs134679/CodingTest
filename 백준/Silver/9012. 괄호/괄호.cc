#include <iostream>
#include <stack>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) 
    {
        stack<char> st;
        string word;
        cin >> word;

        bool isValid = true;

        for (int j = 0; j < word.size(); ++j) 
        {
            if (word[j] == '(') 
            {
                st.push(word[j]);
            }
            else if (word[j] == ')') 
            {
                if (!st.empty() && st.top() == '(') 
                {
                    st.pop();
                }
                else 
                {
                    isValid = false;
                    break;
                }
            }
        }

        if (isValid && st.empty()) 
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}