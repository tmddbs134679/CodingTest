#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
	

	const int size = 100;
	

	vector<vector<int>> paper(size, vector<int>(size, 0));

	int N;

	cin >> N;

	int overlap = 0;


	for (int i = 0; i < N; ++i)
	{
		int a, b;

		cin >> a >> b;

		for (int r = a; r < a + 10; ++r)
		{
			for (int x = b; x < b + 10; ++x)
			{
				if (paper[r][x] == 0)
				{
					paper[r][x] = 1;
				}
				else if (paper[r][x] == 1)
				{
					overlap++;
				}
			}
		}
	}


	cout << N * 100 - overlap;

	
	return 0;


}
