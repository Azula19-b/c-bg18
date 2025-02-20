//============================================================================
// Name        : Baharozer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int number1;//declare variable
		int number2;
		int sum;
		cout << "enter a number ";
		cin >> number1;
		cout << "enter a number ";
		cin >> number2;
		std::cout << " the number you entered is" << number1 << endl;
		std::cout << " the number2 you entered is" << number2 << endl;
		sum = number1 + number2;

		cout << "sum of" << number1 << "+" << number2 << "is" << sum << endl;

	return 0;
}
