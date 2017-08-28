#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double seconds;
	double acceleration = 32;
	cout << "Enter a duration of time in seconds:"<< endl;
	cin >> seconds;
	cout << "You have entered " << seconds << " seconds."<< endl;
	cout << "Distance = " << 0.5 * acceleration * seconds * seconds;
	
	return 0;
}
