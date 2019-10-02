// Quiz4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ct = "", et = "", bs = "";	// clear text, encrypted text, bit string
	int a = 'A', r = 0, len = 0;					// ascii value as int, remainder value as int

		cout << "Enter clear text: " << endl;
		getline(cin,ct);

		len = ct.length();

		do
		{
			r = a % 2;
			a = a / 2;
			bs.append(to_string(r));
		} 
		while (a > 0);

		cout << bs;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
