#include <iostream>
using namespace std;

const int MAX_VALUE = 100;

int main()
{
	//task1
	/*
	int n; int trees[MAX_VALUE];
	do
	{
		cin >> n;
	} while (!cin || (n > 100&&n<0));
	cout <<endl;
	for (int i = 0; i < n; i++)
	{
		cin >> trees[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << trees[i]<< " " ;
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			cout << trees[i]<< " " ;
		}
	}
	*/

	//task2
	/*
	int n; int trees[MAX_VALUE];
	do
	{
		cin >> n;
	} while (!cin || (n > 100 && n < 0));

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> trees[i];
	}
	bool flag = true;
	for (int i = 0; i < n&& flag; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (trees[i] == trees[j])
			{
				flag = false;
				break;
			}
			
		}
	}
	cout << boolalpha << flag;
	*/

	//task 3


}
