#include<iostream>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <cctype>
#include <vector>
#include <algorithm>
#include <string>   

using namespace std;
int a = 0;



int solution(string s)
{

    int answer = 0;

    vector<string> vec_str = { "zero", "one" ,"two" ,"three","four", "five" ,
                         "six" ,"seven" , "eight","nine" };

    int size = s.size();
    string anw_s;

    string a;
    for (int i = 0; i < size; ++i)
    {
        if (!isdigit(s[i]))
        {
            a += s[i];
            auto f = find(vec_str.begin(), vec_str.end(), a);
            if (f != vec_str.end())
            {
                int i = distance(vec_str.begin(), f);
                anw_s += to_string(i);
                a = "";
            }
        }
        else
        {
          

            anw_s += s[i];
        }
    }

    answer = stoi(anw_s);


    return answer;
}