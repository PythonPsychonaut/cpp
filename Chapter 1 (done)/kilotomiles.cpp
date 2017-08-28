// Name: Blake
// 1 kilometer = 0.621 miles
#include <iostream>
using namespace std;


int main()
{
	float kilometers;
	float total;
	cout << "This program will convert kilometers to miles." << endl;
	cout  << "Enter the number of kilometers:" << endl;
	cin >> kilometers;
	total = kilometers * 0.621;
	
	cout << "The answer is:" << total << "miles traveled"<< endl;
	
	return 0;
	
	
	
}
