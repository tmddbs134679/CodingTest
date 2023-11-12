#include <string>
#include <vector>

using namespace std;

string solution(std::string s) 
{
    size_t size = s.length();
    bool b_first = true;

    for (size_t i = 0; i < size; ++i)
    {
        if (b_first)
        {
            s[i] = std::toupper(s[i]);
        }
        else
        {
            s[i] = std::tolower(s[i]);
        }

        // 단어의 끝을 판단하여 다음 단어의 첫 글자를 대문자로 만듦
        if (s[i] == ' ')
        {
            b_first = true;
        }
        else
        {
            b_first = false;
        }
    }

    return s;
}