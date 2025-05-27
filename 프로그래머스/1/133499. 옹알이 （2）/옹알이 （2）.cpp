#include <string>
#include <vector>

using namespace std;

bool isValid(const string s)
{
    vector<string> babbles = { "aya", "ye", "woo", "ma"};
    string tempword = "";
    int i = 0;
    
    while(i < s.size())
    {
        bool check = false;
        for(auto word : babbles)
        {
            if(s.substr(i, word.size()) == word)
            {
                if(word == tempword)   
                    return false;
                
                tempword = word;
                i += word.size();
                check = true;
                break;
            }
        }
        if(!check) return false;
    }
    
    return true;
}


int solution(vector<string> babbling)
{

    int answer = 0;
    
    for(auto word : babbling)
    {  
        if(isValid(word))
            answer++;
    }
    
    
    
    return answer;
}