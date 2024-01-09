#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
	
	string test;

	int Num;

	cin >> test >> Num;

	int decimal = 0;
	int  square = 0;

	for (int i = test.size() - 1; i >= 0; --i)
	{
		int stoii = 0;
		if (test[i] >= '0' && test[i] <= '9')
		{
			stoii = test[i] - '0';
		}
		else if(test[i] >= 'A' && test[i] <= 'Z')
		{
			stoii = test[i] - 'A' + 10;
		}

		decimal += stoii * pow(Num, square);
		square++;
	}

	cout << decimal;

	return 0;
}
