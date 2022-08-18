// Enumeration_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using std::setw;

int main()
{
	enum class Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}
									 yesterday{ Day::Monday }, today{Day::Tuesday},
									 tomorrow{Day::Wednesday};
	Day poets_day{ Day::Friday };

	enum class Punctuation : char { Comma = ',', Exclamation = '!', Question = '?' };
	Punctuation ch{ Punctuation::Comma };

    std::cout << "yesterday's value is " << static_cast<int>(yesterday)
			  << static_cast<char>(ch) << " but poets_day's is " << static_cast<int>(poets_day)
		      << static_cast<char>(Punctuation::Exclamation) << std::endl;
	today = Day::Thursday;							// Assign a new ...
	ch = Punctuation::Question;						//  ... enumerator values
	tomorrow = poets_day;							// Copy enumerator value

	std::cout << "Is today's value(" << static_cast<int>(today)
		<< ") the same as poets_day(" << static_cast<int>(poets_day)
		<< ")" << static_cast<char>(ch) << std::endl;

	// ch = tomorrow;							// Uncomment ...
	// tomorrow = Friday						// ... any of these ...
	// today = 6;								// ... for an error.


}

