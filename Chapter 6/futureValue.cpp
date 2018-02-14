#include <iostream>
#include <cmath>
using namespace std;

double futureValue(double value, double rate, int num_month){ return value * pow(1 + rate / 100, num_month); }

int main() {
double P, i;
int t;
cout << "Input your present value, monthly interest rate and number of months under the \nspace:";
cin >> P >> i >> t;
cout << "Your future value: " << futureValue(P, i, t) << endl;
return 0;
}
