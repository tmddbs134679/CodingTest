#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
	bool answer = true;

	int p_cnt = 0;
	int y_cnt = 0;

	transform(s.begin(), s.end(), s.begin(), ::tolower);

	for (auto test : s)
	{
		if (test == 'p')
		{
			p_cnt++;
		}
		else if (test == 'y')
		{
			y_cnt++;
		}
	}

	if (p_cnt == y_cnt)
		return true;
	else
		return false;
}
