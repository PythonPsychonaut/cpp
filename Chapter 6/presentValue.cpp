#include <iostream>
#include<math.h>
#include<iomanip>

using namespace std;

double presentValue(double, double, int);
int main()
{
  double F = 0;
  double r = 0;
  int n = 0;
  double P = 0;

  cout << "Enter the amount of money you want to save: $:";
  cin >> F;
  cout << "Enter the interest rate: ";
  cin >> r;
  cout << "Enter the numbers of years you want to be saving: ";
  cin >> n;

  P = presentValue(F,r,n);
  cout << "\nIn order to save $" << F << "you will need to deposit $" << P << endl;


  return 0;
}
double presentValue(double F, double r, int n)
{
  double P;
  P = F / (pow(1+(r * 0.01),n));
  return P;
}
