#include <string>
#include <vector>

using namespace std;


int GCD(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	
	return a;
}

int lcm(int a, int b)
{
	
	return  (a * b) / GCD(a, b);
}


vector<int> solution(int n, int m)
{
	vector<int> answer;

	answer.push_back(GCD(n, m));
	answer.push_back(lcm(n, m));
		return answer;
}
