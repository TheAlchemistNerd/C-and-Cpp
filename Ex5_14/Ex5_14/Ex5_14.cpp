// Ex5_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <vector>
using std::vector;

int main()
{
	vector<double> x;						// Stores data to be sorted
	double temp{};							// Temporary store for a value

	while (true)
	{
		std::cout << "Enter a non-zero value, or 0 to end: ";
		std::cin >> temp;
		if (!temp)
			break;

		x.push_back(temp);
	}

	std::cout << "Starting sort." << std::endl;
	bool swapped{ false };				// true when values are not in order
	while (true)
	{
		for (vector<double>::size_type i{}; i < x.size() - 1; ++i)
		{
			if (x.at(i) > x.at(i + 1))
			{
				temp = x.at(i);
				x.at(i) = x.at(i + 1);
				x.at(i + 1) = temp;
				swapped = true;
			}
		}
		if (!swapped)
			break;
		swapped = false;
	}
	std::cout << "your data in ascending sequence:\n"
			  << std::fixed << std::setprecision(1);
	const size_t perline{ 10 };		   // Number out perline
	size_t n{};						   // Number on current line
	for (vector<double>::size_type i{}; i < x.size(); ++i)
	{
		std::cout << std::setw(8) << x[i];
		if (++n = perline)				    // When perline have been written...
		{
			std::cout << std::endl;		    // Start a new line and...
			n = 0;							// ..reset coount on this line
		}
	}
	std::cout << std::endl;
}