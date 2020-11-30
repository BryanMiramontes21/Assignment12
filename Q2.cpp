#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int ArraySize = 0;
	cin >> ArraySize;
	unique_ptr<int[]> Nums(new int[ArraySize]);
	int max = Nums[0];
	srand(time(NULL));

	for (int i = 0; i < ArraySize; i++)
	{
        Nums[i] = rand() % 101;
		cout << Nums[i] << endl;

		if (Nums[i] >= max)
		{
			max = Nums[i]; 
			
			
		}
	}
	cout << "Max : " << max;

}
