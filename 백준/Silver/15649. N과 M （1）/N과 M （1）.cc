#include <iostream>
using namespace std;

int N, M;
int arr[8];
bool visited[8];

void Q(int a) {

	if (a==M){	
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		
	          }
	for (int i = 1; i <= N; i++)
	{
		if (!visited[i]) {
			arr[a] = i;
			visited[i] = true;
			Q(a + 1);
			visited[i] = false;
		}
	}
}
int main() {
	cin >> N >> M;
		Q(0);
}