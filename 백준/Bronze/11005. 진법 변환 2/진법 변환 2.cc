#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
	
	int test, B;

	string str;

	cin >> test >> B;

	while (test > 0)
	{
		int div = test % B;

		if (div < 10)
		{
			str = char(div + '0') + str;
		}
		else
		{
			str = char(div + 'A' - 10) + str;
		}

		test /= B;

	}


	cout << str;

	return 0;
}

