#include <iostream>
using namespace std;


int F(int N) {
	if (N <= 1) 
	{
		return 1;
	}
	else
	{ 
		return N* F(N - 1);
	}
}
int main() {
	int N;
	int num;
	cin >> N;
	num = F(N);
	cout << num;
}

