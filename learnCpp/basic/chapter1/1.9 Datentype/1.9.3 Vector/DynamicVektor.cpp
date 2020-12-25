#include <cstddef>
#include <iostream>
#include <vector>                           // Standard-Vektor einschließen
using namespace std;

int main()
{
	// Vektorsgröße ist dynamische, kann beliebig größ
  vector<int> meineDaten;                   // anfängliche Größe ist 0
  cout << "Bitte Werte eingeben\n";
  int wert {0};
  do {
    cout << "Wert (0 = Ende der Eingabe):";
    cin >> wert;
    if (wert != 0) {
      meineDaten.push_back(wert);           // Wert anhängen
    }
  } while (wert != 0);
  cout << "Es wurden die folgenden Werte eingegeben:\n";
  for (size_t i = 0; i < meineDaten.size(); ++i) {
    cout << i << ". Wert : " << meineDaten[i] << '\n';
  }
}
