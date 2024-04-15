#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n)
{
	
	long long sq = sqrt(n);

	if (sq * sq == n)
	{
		return (sq + 1) * (sq + 1);
	}
	else
	{
		return -1;
	}
}