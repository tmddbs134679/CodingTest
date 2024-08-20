#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) 
{
    vector<string> answer;
    
      for (int i = 0; i < n; i++) 
      {
       
        bitset<16> map1(arr1[i]);
        bitset<16> map2(arr2[i]);
        bitset<16> result = map1 | map2;

        
        string line = "";
        for (int j = 0; j < n; j++) 
        {
            if (result[n - j - 1] == 1) 
            {
                line += '#';
            } else 
            {
                line += ' ';
            }
        }
        answer.push_back(line);
    }
    
    return answer;
}