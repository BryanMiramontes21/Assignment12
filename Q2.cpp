#include <iostream>

using namespace std;

int main()
{
	const int ArraySize = 3;
	string Animals[ArraySize] = { "Bird", "Turtle", "Dog" };
	int AnimalsProb[ArraySize] = { 100, 100, 100 };
	int R = 0;
	string userinput = "Yes";
	int max = AnimalsProb[0];

	cout << "Does your animal fly? : "; cin >> userinput;
	if (userinput == "Yes")
	{
		AnimalsProb[0] = 100;
	}
	if (userinput == "No")
	{
		AnimalsProb[0] = 0;
	}
	if (userinput == "Maybe")
	{
		AnimalsProb[0] = AnimalsProb[0] - 5;
	}

	cout << "Does your animal live in the ocean? : "; cin >> userinput;
	if (userinput == "Yes")
	{
		AnimalsProb[1] = 100;
	}
	if (userinput == "No")
	{
		AnimalsProb[1] = 0;
	}
	if (userinput == "Maybe")
	{
		AnimalsProb[1] = AnimalsProb[1] - 5;
	}

	cout << "Is your animal weidly domesticated? :  "; cin >> userinput;
	if (userinput == "Yes")
	{
		AnimalsProb[2] = 100;
	}
	if (userinput == "No")
	{
		AnimalsProb[2] = 0;
	}
	if (userinput == "Maybe")
	{
		AnimalsProb[2] = AnimalsProb[2] - 5;
	}

	for (int i = 0; i < ArraySize; i++)
	{
		cout <<i+1<<"."<< Animals[i] << " " << AnimalsProb[i] << "%" << " ,";
		cout << endl;
	}

	for (int i = 1; i < ArraySize; i++)
	{

		cout << AnimalsProb[i] << " ";
		if (AnimalsProb[i] >= max)
		{
			max = AnimalsProb[i];
			R++;
			cout << R << endl;

		}

	}
	cout << Animals[R] << endl;
	cout << "The largest number is : " << max;
	return 0;
}