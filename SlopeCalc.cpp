#include <iostream>
#include <iomanip>

int main()
{
    double x1 = 0, y1 = 0, x2= 0, y2 = 0 ;

    // enter the X and Y for the calculation
    std::cout << "Please Enter the first X: ";
    std::cin >> x1;
    std::cout << "Now Enter the first Y: ";
    std::cin >> y1;
    std::cout << "Please Enter the second X: ";
    std::cin >> x2;
    std::cout << "Now Enter the second Y: ";
    std::cin >> y2;

    // slope  calculation
    const double m = (y2-y1) / (x2-x1) ;
    std::cout << "\nGreat, The slope is: " << m << '\n' ;

    // get the final slope intercept form
    const double b = y1 - (m*x1) ;
    std::cout << "Now, the y intercept is: " << b << '\n' ;

    // line equation eg. y = 2.6 * x + -4.2
    std::cout << "And the final line equation is: "
              << "y = " << m << " * x  + " << b << '\n';
 }
