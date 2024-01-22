#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <map>
#include <set>

using namespace std;


int main() 
{
  
    std::map<std::string, bool> employees;

    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    while (n--) 
    {
        std::string name, status;
        std::cin >> name >> status;

        if (status == "enter")
        {

         
            employees[name] = true;
        }
        else 
        {
           
            employees.erase(name);
        }
    }

  
    for (auto it = employees.rbegin(); it != employees.rend(); ++it)
    {
        std::cout << it->first << '\n';
    }

    return 0;
}