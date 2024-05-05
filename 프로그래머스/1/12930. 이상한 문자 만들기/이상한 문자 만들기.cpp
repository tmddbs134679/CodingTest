#include <string>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string solution(string s)
{
    int index = 0;
    for (char& c : s)
    {
       
        if (isspace(c)) 
        {
            index = 0;
        } else {
           
            if (index % 2 == 0) 
            {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
            index++;
        }
    }
    return s;
}