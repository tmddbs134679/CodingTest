#include <string>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


bool compare(const string& a, const string& b) 
{
    return a + b > b + a;
}

string solution(vector<int> numbers) 
{
    string answer = "";

    vector<string> s;
    for (auto a : numbers) 
    {
        s.push_back(to_string(a));
    }

    sort(s.begin(), s.end(), compare);

    // 예외 처리: 모두 0일 경우
    if (s[0] == "0")
        return "0";

    for (auto a : s) 
    {
        answer += a;
    }

    return answer;
}