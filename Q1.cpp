#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int ArraySize = 50;
	int Grades[ArraySize];
	int i = 0;
	srand(time(NULL));

	for (i = 0; i < ArraySize; i++)
	{
		
		Grades[i] = rand() % 100;
		
		if (Grades[i] < 60)
		{
			cout << Grades[i] << " Fail" << endl;
		}
		else
		{
			cout << Grades[i] << " Pass" << endl;
		}
	}


}
