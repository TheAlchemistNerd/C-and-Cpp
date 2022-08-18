// Optical_illusion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using std::setw;

int main()
{
	unsigned int red { 0XFF0000U };			// Color red
	unsigned int white { 0XFFFFFFU };		// Color white - RGB all maximum

    std::cout << std::hex					// Hexadecimal output
			  << std::setfill('0');			// Fill character 0

	std::cout << "Try out bitwise AND and OR operators:";
	std::cout << "\nInitial value red = " << setw(8) << red;
	std::cout << "\nComplement	~red = " << setw(8) << ~red;

	std::cout << "\nInitial value white = " << setw(8) << white;
	std::cout << "\nComplement	~red = " << setw(8) << ~white;

	std::cout << "\nBitwise AND red & white = " << setw(8) << (red & white);
	std::cout << "\nBitwise OR red | white = " << setw(8) << (red | white);

	std::cout << "\n\nNow try out successive exclusive OR operations:";
	unsigned int mask{ red^white };
	std::cout << "\nmask = red ^ white = " << setw(8) << mask;
	std::cout << "\n        mask ^ red = " << setw(8) << (mask ^ red);
	std::cout << "\n        mask ^ white = " << setw(8) << (mask ^ white);

	unsigned int flags{ 0xFF };				// Flags variable
	unsigned int bit1mask{ 0x1 };			// Selects bit 1
	unsigned int bit6mask{ 0x20 };			// Selects bit 6
	unsigned int bit20mask{ 0x8000 };		// Selects bit20

	std::cout << "\n\nUse masks to select or set a particular flag bit:";
	std::cout << "\nSelect bit 1 from flags	  :" << setw(8) << (flags & bit1mask);
	std::cout << "\nSelect bit 6 from flags	  :" << setw(8) << (flags & bit6mask);
	std::cout << "\nSwitch off bit6 from flags:" << setw(8) << (flags &= ~bit6mask);
	std::cout << "\nSwitch on bit6 in flags   :" << setw(8) << (flags |= bit20mask)
			  << std::endl;


}

