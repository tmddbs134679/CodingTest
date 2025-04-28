#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by)
{
    vector<vector<int>> answer;
    
    map<string, int> _map = { {"code", 0}, {"date", 1}, {"maximum", 2}, {"remain",3}};
    int _ext = _map[ext];
    int _sort = _map[sort_by];
                            
                            
   for(auto a : data)
   {
       if (a[_ext] < val_ext)
       {
           answer.push_back(a);
       }
   }

   sort(answer.begin(), answer.end(), [_sort](const vector<int>& a, const vector<int>& b)
   {
       return a[_sort] < b[_sort];
   });


        return answer;
}