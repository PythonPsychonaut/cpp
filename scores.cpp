#include<iostream>
02. #include<cmath>
03. #include<iomanip>
04. 
05. using namespace std;
06.
07. int main()
08. {
09. double angle , sinAngle , cosAngle , tanAngle;
10. cout << setprecision(5) << fixed;
11. cout << "Enter angle: ";
12. cin >> angle;
13. sinAngle = sin(angle);
14. cout << setprecision(4);
15. cout << "sin(" << angle << ")=" << sinAngle << endl;
16. cosAngle = cos(angle);
17. cout << "cos(" << angle << ")=" << cosAngle << endl;
18. tanAngle = tan(angle);
19. cout << "tan(" << angle << ")=" << tanAngle << endl;
20. return 0;
21. }
