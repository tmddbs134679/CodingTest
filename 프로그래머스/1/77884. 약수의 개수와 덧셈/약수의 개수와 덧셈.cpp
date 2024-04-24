#include <string>
#include <vector>

using namespace std;

int solution(int left, int right)
{
	int answer = 0;

	int size = right - left;

	int num = left;

	while (num <= right)
	{

	
		int check = 0;
		
		for (int i = 1; i <= num; ++i)
		{
			if (num % i == 0)
				check++;
		}

		if (check % 2 == 0)
			answer += num;
		else
			answer -= num;

		num++;
	}

	return answer;
}
