#include <iostream>


using namespace std;


int arr[100000];

int main() 
{

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int N;

    cin >> N;


    if (N == 1)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << N * (N - 1) << endl;
    }


}