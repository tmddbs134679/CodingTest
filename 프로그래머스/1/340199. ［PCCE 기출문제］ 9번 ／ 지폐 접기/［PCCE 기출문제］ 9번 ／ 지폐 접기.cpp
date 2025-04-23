#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) 
{
    int answer = 0;
    int wtw = wallet[0];
    int wth = wallet[1];
     int w = bill[0];
     int h = bill[1];
  
        
    while(true)
    {
        if((w <= wtw && h <= wth) || (w <= wth && h <= wtw))
            break;
            
        int& max = (w > h) ? w : h;
        
        if(max > wtw || max > wth)
        {
            max /= 2;
        }
        answer++;
    }
    
    
    return answer;
}