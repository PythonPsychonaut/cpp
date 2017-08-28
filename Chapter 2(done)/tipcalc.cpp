#include <iostream>

using namespace std;

int main()
{
double	bill = 44.50;
double	tax = bill * .0675;
double	tip = (bill + tax) * .15;
double total = bill + tax + tip;
	
	cout << "The meal cost is:$" << bill << endl;
	cout << " The tax amount is:$" << tax << endl;
	cout << " The amount before tip is: $" <<  tax << endl;
	cout << " The tip should be:$" << tip << endl;
	cout << "The final amount is : $" << total << endl;
}
