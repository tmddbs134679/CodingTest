#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
	
	int cnt;
	int Q = 25;
	int D = 10;
	int N = 5;
	int P = 1;

	cin >> cnt;

	std::vector<std::vector<int>> arr(cnt, std::vector<int>(4));

	for (int i = 0; i < cnt; ++i)
	{

		int inc = 0;

		int q, d, n, p;
		int ch;

			cin >> ch;

		

			while (ch)
			{
				q = ch / Q;
				ch -= q * Q;
				arr[i][inc] = q;
				inc++;



				d = ch / D;
				ch -= d * D;
				arr[i][inc] = d;
				inc++;

				n = ch / N;
				ch -= n * N;
				arr[i][inc] = n;
				inc++;

				p = ch / P;
				arr[i][inc] = p;
				ch -= p * P;

			}

	}


	for (int i = 0; i < cnt; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

