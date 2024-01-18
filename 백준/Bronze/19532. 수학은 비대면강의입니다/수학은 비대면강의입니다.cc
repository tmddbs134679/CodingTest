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
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;
	

	int x = (e * c - b * f) / (a * e - b * d);
	int y = (a * f - c * d) / (a * e - b * d);

	cout << x << " "<< y;

	return 0;

}
