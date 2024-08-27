#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) 
{
    vector<int> Mons = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> Days = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int num = 0;
    for(int i=0; i < a - 1; ++i)
    {
        num += Mons[i];
    }
    
    num += b - 1;
    num %= 7;

    
    return Days[num];

}