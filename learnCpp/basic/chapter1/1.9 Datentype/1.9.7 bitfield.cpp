#include <iostream>
using namespace std;

struct Bitfeldstruktur {
  unsigned int a : 4;                   // a und b sind Bitfelder 位段，该变量占据多少个bit位
  unsigned int b : 3;
  int Bitxfeld : 13;
};

int main()
{
  Bitfeldstruktur x;
  x.a = 06;                             // zur Abwechslung Oktalschreibweise
  x.b = x.a | 3;                        // Bit-Operation
  cout << x.b << '\n';                  // Umwandlung in unsigned und Ausgabe
}

