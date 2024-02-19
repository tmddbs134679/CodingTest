#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) 
{
    unordered_map<string, int> hash_map;

    // 해시 맵에 각 전화번호를 저장
    for (const string& number : phone_book)
    {
        hash_map[number] = 1; 
    }

   
    for (const string& number : phone_book) 
    {
        for (int i = 1; i < number.length(); ++i)
        {
            string prefix = number.substr(0, i);
          
            if (hash_map.find(prefix) != hash_map.end())
            {
                return false; 
            }
        }
    }

    return true; 
}