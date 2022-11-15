// Print a pyramid shaped pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k < 2 * i; k++)
		{
			cout << "*";
		}
		cout << endl;
   }

}

