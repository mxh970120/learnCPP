#include <iostream>
#include <vector>
using namespace std;

struct Punkt {
  int x;
  int y;
};

int main()
{
  constexpr Punkt p1 {100, 200};  // constexpr 函数是在使用需要它的代码时，可以在编译时计算其返回值的函数
  auto p2 {p1};                         // p2 ist auch vom Typ Punkt, aber nicht konstant
  p2.x = 99;
  cout << "p2.x= " << p2.x << "  p2.y= " << p2.y << '\n';
  vector<double> v1{1.1, 2.2, 3.3, 4.4, 5.5};
  auto v2(v1);                          // v2 ist auch vom Typ vector<double>
  for (auto wert : v2) {
    cout << wert << ' ';                // anzeigen
  }
  cout << '\n';
   for (auto wert : v2) {              // mit Referenz
    wert *= 2.0;                        // alle Elemente verdoppeln
  }
  for (auto wert : v2) {
    cout << wert << ' ';                // anzeigen
  }
  cout << '\n';
}

