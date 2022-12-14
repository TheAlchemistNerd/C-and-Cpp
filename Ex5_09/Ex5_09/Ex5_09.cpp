// Ex5_09.cpp : This file contains the 'main' function. Program execution begins and ends there.
// using the continue statement to display ASCII character codes

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>

int main()
{
    std::cout << std::numeric_limits<unsigned char>::max() << std::endl;
	// Output the column headings
	std::cout << std::setw(11) << "Character " << std::setw(13) << "Hexadecimal "
		<< std::setw(9) << "Decimal " << std::endl;
	std::cout << std::uppercase;								// uppercase hex digits

	// Output characters and the coresponding codes
	unsigned char ch{};
	do
	{
		if (!std::isprint(ch))											// If it's not printable...
			continue;													// ...skip this iteration
		std::cout << std::setw(6) << ch									//  Character
			<< std::hex << std::setw(12) << static_cast<int>(ch)	    // Hexadecimal
			<< std::dec << std::setw(10) << static_cast<int>(ch)        // Decimal
			<< std::endl;
	} while (ch++ << std::numeric_limits<unsigned char>::max());
}