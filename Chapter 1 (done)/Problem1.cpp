// This program calculates baseball cost.
#include <iostream>
using namespace std;

int main()
{
	int baseball;
	double amount, cost; 
	// Get the number of balls.
	cout << "Number of baseballs purchased: ";
	cin >> amount;
	
	// Get the cost.
	cout << "Cost of baseball: ";
	cin >> cost;
	
	// Calculate the pay.
	baseball = amount * cost;
	
	// Display the pay.
	cout << "Total cost is $" << baseball << endl;
	return 0;
}
