#include <iostream>

using namespace std;

int main()
{
	float productionCost = 14.95;
	float profit = .35;
	float wantedProfit = 14.95 * .35;
	float finalPrice = productionCost + wantedProfit;
	
	cout << "To make a 35% profit each board must be sold for : $" << finalPrice << endl;
	
	return 0;
}
