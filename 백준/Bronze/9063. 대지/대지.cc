#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;


int main()
{
	int N;

	cin >> N;

	vector<int> xarr(N);
	vector<int> yarr(N);

	for (int i = 0; i < N; ++i)
	{			
		int x, y;
		cin >> x >> y;

		xarr[i] = x;
		yarr[i] = y;
	}

	if (N <= 1)
	{
		cout << "0";
		return 0;
	}
	else
	{
		int xmax, xmin, ymax, ymin;

		xmin = *min_element(xarr.begin(), xarr.end());
		xmax = *max_element(xarr.begin(), xarr.end());
		ymin = *min_element(yarr.begin(), yarr.end());
		ymax = *max_element(yarr.begin(), yarr.end());

		cout << (xmax - xmin) * (ymax - ymin);
	}



	return 0;

}
