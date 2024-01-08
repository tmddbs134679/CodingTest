#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

struct pos
{
	int row;
	int col;
};


int main()
{
	const int row = 9 + 1;
	const int col = 9 + 1;

	int arr[row][col] = { 0 };




	for (int i = 1; i < row; ++i)
	{
		for (int j = 1; j < col; ++j)
		{
			cin >> arr[i][j];
		}
	}
	

	int maxVal = 0;
	pos maxpos = { 1,1 };


	for (int i = 1; i < row; ++i)
	{
		for (int j = 1; j < col; ++j)
		{
			if (arr[i][j] > maxVal)
			{
				maxVal = arr[i][j];
				maxpos.row = i;
				maxpos.col = j;
			}
			
		}
	}

	cout << maxVal << endl;
	cout << maxpos.row <<" "<< maxpos.col;


    return 0;

}

