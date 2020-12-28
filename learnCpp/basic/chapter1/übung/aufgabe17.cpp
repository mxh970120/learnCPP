#include <iostream>
#include <string>

using namespace std;

struct Person {             
  string nachname;
  string vorname;
  int alter;
};

int main()
{
  Person einePerson;
  cout << "Nachname: ";
  cin >> einePerson.nachname;
  cout << "Vorname: ";
  cin >> einePerson.vorname;
  cout << "Alter: ";
  cin >> einePerson.alter;
  cout << "Nachname ist    : " << einePerson.nachname << '\n';
  cout << "Vorname ist    : " << einePerson.vorname << '\n';
  cout << "Alter ist       : " << einePerson.alter << '\n';
}
