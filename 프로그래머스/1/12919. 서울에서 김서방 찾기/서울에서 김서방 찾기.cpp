#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul)
{
	string answer = " ";

	string s = "Kim";

	auto iter = find(seoul.begin(), seoul.end(), s);

	int num = distance(seoul.begin(), iter);

	answer = "김서방은 " + to_string(num) + "에 있다";
	

	return answer;
}