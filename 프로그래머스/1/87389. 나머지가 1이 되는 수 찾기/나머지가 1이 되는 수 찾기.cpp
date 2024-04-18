#include <string>
#include <vector>

using namespace std;

int solution(int n)
{

	int min = 2;

	while (true)
	{
		if (n % min == 1)
		{
			return min;
		}
		min++;

	}

	return min;
}