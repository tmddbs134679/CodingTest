#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) 
{
    int answer = 0;
    set<int> sum;
    
    int size = elements.size();
    
    for(int i = 1; i <= size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {   
            int temp = 0;
             for (int k = 0; k < i; ++k) 
             {
                temp += elements[(j + k) % size];
            }
            
            
            sum.insert(temp);
           
        }
        
    }
    
    
    answer = sum.size();
    
    return answer;
}