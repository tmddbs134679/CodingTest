#include <string>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int solution(int n)
{
	if (n == 0)
		return 0;


	int answer = 0;
	
	deque<int> th;

	while (n > 0)
	{
		int a = n % 3;
		th.push_front(a);
		n /= 3;
	}

	for (int i = th.size() - 1; i >= 0; i--)
	{
		if (th[i] == 0)
			continue;

		answer += pow(3, i) * th[i];
	}

	return answer;
}