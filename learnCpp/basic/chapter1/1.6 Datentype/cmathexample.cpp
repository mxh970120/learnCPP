#include <cmath>
#include <iostream>
using namespace std;
int main()                            //  Berechnung mathematischer Ausdrücke
{
  double x {0.0};                     // Initialisierung hier nicht unbedingt notwendig.
  cout << "x eingeben:";
  cin >> x;
  cout << " x       = " << x << '\n';
  cout << " fabs(x) = " << fabs(x) << '\n';
  cout << " sqrt(x) = " << sqrt(x) << '\n';
  cout << " sin(x)  = " << sin(x) << '\n';   // Argument von sin() im Bogenmaß!
  cout << " exp(x)  = " << exp(x) << '\n';
  cout << " log(x)  = " << log(x) << '\n';   // log() ist der natürliche Logarithmus
}

