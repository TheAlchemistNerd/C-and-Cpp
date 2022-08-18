// Beginning_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using std::cout;

int main()
{
	int a{ 16 }, b{ 66 };
	cout << std::setw(5) << a << std::setw(5) << b << std::endl;
	cout << std::left << std::setw(5) << a << std::setw(5) << b << std::endl;
	cout << "a = " << std::setbase(16) << std::setw(6) << std::showbase << a
		<< "b = " << std::setw(16) << b << std::endl;
	cout << std::setw(10) << a << std::setw(10) << b << std::endl;

	return 0;
}
