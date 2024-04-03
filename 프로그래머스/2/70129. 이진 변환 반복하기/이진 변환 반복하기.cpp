#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;

    
    int count = 0;

    int zero_count = 0;

    while (s != "1") 
    {
       
        string next = "";

       
        for (char c : s) 
        {
            if (c == '1')
            {
                next += c;
            }
            else 
            {
                zero_count++;
            }
        }

        s = "";
        int size = next.size();

        while (size != 0)
        {
            if (size % 2 == 0)
            {
                size /= 2;
                s.insert(0, "0");
            }
            else
            {
                size/= 2;
                s.insert(0, "1");
               
            }

        }

      
        count++;
    }

   
    answer.push_back(count); 
    answer.push_back(zero_count); 

    return answer;
}
