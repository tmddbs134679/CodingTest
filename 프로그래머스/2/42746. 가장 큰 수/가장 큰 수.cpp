#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <queue>


using namespace std;
bool compare(const string& a, const string& b)
{

 
    return a + b > b + a;
}

using namespace std;
string solution(vector<int> numbers)
{
    string answer = "";

    
    vector<string> st;
 

    for (auto num : numbers)
    {   
        string itos = to_string(num);
        st.push_back(itos);
    }

    sort(st.begin(), st.end(), compare);

    for (string str : st)
    {
        answer += str;

    }

    if (answer[0] == '0') return "0";
    return answer;
}

