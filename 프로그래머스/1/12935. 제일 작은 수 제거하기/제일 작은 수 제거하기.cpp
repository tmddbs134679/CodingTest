#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	if (arr.size() == 1)
	{
		arr.clear();
		arr.push_back(-1);
		return arr;
	}

	auto minValue = min_element(arr.begin(), arr.end());

	arr.erase(minValue);

	return arr;
}

