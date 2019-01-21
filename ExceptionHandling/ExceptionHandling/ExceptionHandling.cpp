#include "pch.h"
#include<exception>
#include <iostream>
#include<stdexcept>
using namespace std;

void Division_by_zero();
int CompareValues(int a, int b);

int main()
{
	try
	{
		Division_by_zero();

	}
	catch (int e)
	{
		cout << "Division by zero is not allowed Error: " << e << endl;
	}
	catch (char const  *x)
	{
		cout << "Division by 10 error: " << x << endl;
	}
	catch (string &y)
	{
		cout << "Catching another division by 100: " << endl;
	}


	try
	{
		int c = 3;
		int d = -9;
		int save_value = 0;
		save_value = CompareValues(c, d);

	}
	catch (const std::exception& e)
	{
		cout<<"Not a good value entered"<<endl;
		
	}


	return 0;
}

void Division_by_zero()
{
	
		int num1 = 2;
		cout << "Please enter first number" << endl;
		cin >> num1;

		int num2 = 0;
		cout << "Please enter second number " << endl;
		cin >> num2;

		if (num2 == 0)
		{
			throw 0;
		}

		if (num2 == 10)
		{
			throw "division by 10";
		}

		if (num2 == 100)
		{
			throw string("100");
		}

		int result = 0;
		result = num1 / num2;
		cout << "This is the result \n" << result << '\n';

}

int CompareValues(int a, int b)
{
	if (a < 0 || b < 0)
	{
		throw invalid_argument("Negative value entered");
	}
	
}


 //Run program: Ctrl + F5 or Debug > Start Without Debugging menu
 //Debug program: F5 or Debug > Start Debugging menu

 //Tips for Getting Started: 
 //  1. Use the Solution Explorer window to add/manage files
 //  2. Use the Team Explorer window to connect to source control
 //  3. Use the Output window to see build output and other messages
 //  4. Use the Error List window to view errors
 //  5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
 //  6. In the future, to open this project again, go to File > Open > Project and select the .sln file
