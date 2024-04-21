#include <string>
#include <vector>

using namespace std;


int solution(int num)
{
	int answer = 0;
	
	long long l = num;

	while (l != 1)
	{
		if (answer >= 500)
		{
			return -1;
		}

		if (l % 2 == 0)
		{
			l /= 2;
		}
		else
		{
			l *= 3;
			l += 1;
		}

		answer++;
	}

	return answer;
}