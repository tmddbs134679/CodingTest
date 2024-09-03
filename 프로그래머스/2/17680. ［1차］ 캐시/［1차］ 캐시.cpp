#include <string>
#include <vector>
#include <list>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities)
{
    if (cacheSize == 0) return cities.size() * 5;
    
    list<string> cache;
    unordered_map<string, list<string>::iterator> cache_map;
    int total_time = 0;
    
   
    
    for (auto &city : cities) 
    {
     transform(city.begin(), city.end(), city.begin(), ::tolower);
        if (cache_map.find(city) != cache_map.end()) 
        {
            // Cache Hit
            cache.erase(cache_map[city]);
            cache.push_front(city);
            cache_map[city] = cache.begin();
            total_time += 1;
        } 
        else 
        {
            // Cache Miss
            if (cache.size() == cacheSize) 
            {
                cache_map.erase(cache.back());
                cache.pop_back();
            }
            cache.push_front(city);
            cache_map[city] = cache.begin();
            total_time += 5;
        }
    }
    
    return total_time;
}