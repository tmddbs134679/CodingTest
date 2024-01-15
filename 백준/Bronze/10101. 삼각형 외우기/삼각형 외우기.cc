#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;


int main()
{

	int tr[3];

	for (int i = 0; i < 3; ++i)
	{
		int n;
		cin >> tr[i];

	}

	if (tr[0] + tr[1] + tr[2] != 180)
	{
		cout << "Error";
	}
	else
	{
		if (tr[0] == tr[1] && tr[1] ==  tr[2])
		{
			cout << "Equilateral";

		}
		else if (tr[0] == tr[1] || tr[0] == tr[2] || tr[1] == tr[2])
		{
			cout << "Isosceles";
		}
		else 
		{
			cout << "Scalene";
		}
	}

	return 0;

}
