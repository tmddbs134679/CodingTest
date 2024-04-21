#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
	string answer = "";

	int size = s.size();
	


	if (size % 2 == 0)
	{
		size /= 2;
		answer += s[size - 1];
		answer += s[size];
		return answer;
	}
	else
	{
		size /= 2;
		answer = s[size];
		return answer;
	}

	return answer;
}