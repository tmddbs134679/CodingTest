#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>


using namespace std;


int main()
{
	int cnt = 0;
	
	vector<string> str;

	while (1)
	{
	
		int a, b, c;
		vector<int> tr(3);

		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		tr[0] = a;
		tr[1] = b;
		tr[2] = c;

		int max_len = *max_element(tr.begin(), tr.end());
		int sum_len = accumulate(tr.begin(), tr.end(), 0);



		if (max_len >= sum_len - max_len)
		{
			str.push_back("Invalid");
		}
		else
		{
			if (tr[0] == tr[1] && tr[1] == tr[2])
			{
				str.push_back("Equilateral");
			}
			else if (tr[0] == tr[1] || tr[1] == tr[2] || tr[0] == tr[2])
			{
				str.push_back("Isosceles");
			}
			else
			{
				str.push_back("Scalene");
			}
		}

		cnt++;
	}
	

	for (int i = 0; i < cnt; ++i)
	{
		cout << str[i] << endl;
	}
	
	return 0;

}