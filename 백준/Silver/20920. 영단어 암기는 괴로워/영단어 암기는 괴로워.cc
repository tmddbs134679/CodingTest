#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    scanf("%d %d", &N, &M);

    map<string, int> map_si;

    char word[101]; // assuming maximum word length is 100
    for (int i = 0; i < N; ++i)
    {
        scanf("%s", word);
        string s(word);
        if (s.size() >= M)
        {
            map_si[s]++;
        }
    }

    vector<pair<string, int>> sorted_words;
    for (const auto& pair : map_si)
    {
        sorted_words.push_back(pair);
    }

    sort(sorted_words.begin(), sorted_words.end(), [](const pair<string, int>& a, const pair<string, int>& b)
    {
        if (a.second != b.second) 
        {
            return a.second > b.second; 
        }
        else
        {
            if (a.first.size() != b.first.size()) 
            {
                return a.first.size() > b.first.size(); 
            }
            else 
            {
                return a.first < b.first; 
            }
        }
    });

    for (const auto& entry : sorted_words)
    {
        printf("%s\n", entry.first.c_str());
    }

    return 0;
}