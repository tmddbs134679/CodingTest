using namespace std;

long long solution(int price, int money, int count)
{
	long long answer = -1;

	long long pr = 0;

	for (int i = 1; i <= count; ++i)
	{
		pr += price * i;
	}

	if (pr < money)
		return 0;
	else
	answer = pr - money;

	return answer;
}
