#include <string>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

long long solution(long long n)
{
	long long answer = 0;

	vector<int> v;
	string s = to_string(n);

	for (char test : s)
	{
		v.push_back(test - '0');
	}

	s.clear();

	
	sort(v.begin(), v.end(), [](int a, int b) { return a > b;});

	for (int i = 0; i < v.size(); ++i)
	{
		s += to_string(v[i]);

	}

	answer = stoll(s);


	return answer;
}

