#include <iostream>
using namespace std;

int main()
{
	int Month, Day, Year;


	cout << "Enter (in numeric form) a month, a day, and a two digit year,\n"
		 << "and the program will determine if the date is magic.\n";
	cout << "Enter a month: ";
	cin  >> Month;
	cout << "Enter a day: ";
	cin  >> Day;
	cout << "Enter a Year";
	cin  >> Year;


	if (Year == Month * Day)
		cout << "The date is magic.\n";
	else
		cout << "The date is not magic.\n";
	return 0;
	system("pause");
}
