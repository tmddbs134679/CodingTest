#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>


using namespace std;




int main()
{
	int N, k;

	cin >> N >> k;


	vector<int> num(N);

	for (int i = 0; i < N; ++i)
	{
		int point;
		cin >> point;
		num[i] = point;
			
	}
	
	sort(num.begin(), num.end());

	cout << num[N - k];

	return 0;

}
