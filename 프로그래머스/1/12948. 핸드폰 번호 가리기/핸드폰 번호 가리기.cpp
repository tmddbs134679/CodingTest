#include <string>
#include <vector>

using namespace std;

string solution(string phone_number)
{
	string answer = "";

	int star_size = phone_number.size() - 4;

	string backnum;



	for (int i = 0; i < star_size; ++i)
	{
		answer += "*";
	}


	for (int i =0; i < 4; ++i)
	{	
		answer += phone_number[star_size + i];
	}

	//answer -= 

	return answer;
}
