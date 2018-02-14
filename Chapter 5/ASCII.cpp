#include <iostream>
using namespace std;

int main()
{
	cout << "This program will print out the ASCII charaters from number 32 through 127";
	const int CODES = 127;
	const int CHARS	= 16;

	char ASCIIChar;




	for(int code = 0; code <= CODES; code++)
	{

		ASCIIChar = code;


		(code % CHARS == 0) ?
		(cout << ASCIIChar << endl) :
		(cout << ASCIIChar);
	}


}
