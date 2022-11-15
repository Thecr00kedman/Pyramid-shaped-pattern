// Print a pyramid shaped pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++) //i is for printing rows
	{
		for (int j = 1; j <= 5 - i; j++)  //j is for printing spaces

		{
			cout << " ";
		}
		for (int k = 1; k < 2 * i; k++) //k is for priniting stars
		{
			cout << "*";
		}
		cout << endl;
   }

}

