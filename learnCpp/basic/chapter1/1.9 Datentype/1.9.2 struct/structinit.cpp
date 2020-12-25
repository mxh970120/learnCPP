#include <iostream>
using namespace std;
enum class Farbtyp { rot, gelb, gruen };

struct Punkt {
  int x;
  int y;
  bool istSichtbar;
  Farbtyp dieFarbe;
};

int main()
{
  Punkt p1 = {100, 200, false, Farbtyp::gelb};  // mit = und {}
  Punkt p2 {};                                  // alles 0
  Punkt p3 { .x = 10, .istSichtbar = true, .dieFarbe = Farbtyp::gruen};
                                                // ohne Initialisierung für .y
  for(int nr = 1; auto p : {p1, p2, p3}) {      // Liste von 3 Punkten
    cout << nr++ << ": " << p.x << "  " << p.y  << "  " << p.istSichtbar
         << "  " << static_cast<int>(p.dieFarbe) << '\n';
  }
}


