#include <string>
#include <vector>

using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    int size = p.size();
    int w = t.length();


    long long num_p = stoll(p);

    for (int i = 0; i <= w - size; ++i) 
    {
        string s = t.substr(i, size); 

      
        long long num_t = stoll(s);

        
        if (num_t <= num_p) 
        {
            ++answer;
        }
    }

    return answer;
}