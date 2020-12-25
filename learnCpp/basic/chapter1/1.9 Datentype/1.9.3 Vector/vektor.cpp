#include <algorithm>                    // enthält Sortierfunktion sort()
#include <cstddef>                      // size_t
#include <iostream>
#include <vector>                       // Standard-Vektor bekannt machen
using namespace std;

int main()                              // Programm mit typischen Vektor-Operationen
{ 
  vector<double> kosten(12);            // Tabelle mit 12 double-Werten
  // Füllen der Tabelle mit beliebigen Daten, dabei Typumwandlung int -> double.
  // Die Funktion size() gibt eine Zahl vom Typ size_t zurück.
  // Deshalb hat die Laufvariable i denselben Typ.
  for (size_t i = 0; i < kosten.size(); ++i) {
    kosten[i] = static_cast<double>(150 - i * i) / 10.0;
  }
  for (size_t i = 0; i < kosten.size(); ++i) {  // Tabelle ausgeben
    cout << i << ": " << kosten[i] << '\n';
  }
  // Berechnung und Anzeige von Summe und Mittelwert
  double sum = 0.0;
  for (size_t i = 0; i < kosten.size(); ++i) {
    sum += kosten[i];
  }
  cout << "Summe = " << sum << '\n';
  cout << "Mittelwert = " << sum / kosten.size() << '\n';
                     // implizite Typumwandlung des Nenners nach double
  // Maximum anzeigen
  double maxi{kosten[0]};
  for (size_t i = 1; i < kosten.size(); ++i) {
    if (maxi < kosten[i]) {
      maxi = kosten[i];
    }
  }
  cout << "Maximum = " << maxi << '\n';

  // zweite Tabelle sortierteKosten deklarieren und mit der ersten initialisieren
  vector<double> sortierteKosten{kosten};
  // zweite Tabelle aufsteigend sortieren
  // ranges::sort(sortierteKosten) since C++20
  sort(sortierteKosten.begin(), sortierteKosten.end());
  // und mit der laufenden Nummer ausgeben
  for (size_t i = 0; i < sortierteKosten.size(); ++i) {
    cout << i << ": " << sortierteKosten[i] << '\n';
  }
  // Kurzform, wenn die lfd. Nummer nicht gebraucht wird:
  for (auto diekosten : sortierteKosten) {
    cout << diekosten << '\n';
  }
  //vector::at 用于检测输入的n是否超出范围，超出则返回out of range
  cout<< kosten.at(11)<<endl;
}

