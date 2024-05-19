#include <string>
#include <vector>

using namespace std;

string solution(const string s, int n) 
{
    string answer = "";
    for (char c : s) 
    {
        if (c >= 'a' && c <= 'z')
        {
            // 소문자 처리
            answer += (c - 'a' + n) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') 
        {
            // 대문자 처리
            answer += (c - 'A' + n) % 26 + 'A';
        } else 
        {
            // 공백 처리
            answer += c;
        }
    }
    return answer;
}