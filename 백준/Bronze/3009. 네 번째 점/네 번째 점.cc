#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>


using namespace std;


int main()
{
	int arr1[3];
	int arr2[3];

	for (int i = 0; i < 3; ++i)
	{
		cin >> arr1[i] >> arr2[i];
	}

	if (arr1[0] == arr1[1])
	{
		cout << arr1[2] << " ";
	}
	else if (arr1[0] == arr1[2])
	{
		cout << arr1[1] << " ";
	}
	else
	{
		cout << arr1[0] << " ";
	}

	if (arr2[0] == arr2[1])
	{
		cout << arr2[2];
	}
	else if (arr2[0] == arr2[2])
	{
		cout << arr2[1];
	}
	else
	{
		cout << arr2[0];
	}


	return 0;

}