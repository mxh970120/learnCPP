#include <iostream>
#include <limits>                       // hier sind die Bereichsinformationen
using namespace std;

int main()
{
  cout << "Grenzwerte für Ganzzahl-Typen:" << '\n';          // = neue Zeile
  cout << "short Minimum =       " << numeric_limits<short>::min() << '\n';  // -2^15~2^15-1 16bits
  cout << "short Maximum =        " << numeric_limits<short>::max() << '\n';
  cout << "int Minimum =       " << numeric_limits<int>::min() << '\n';  // -2^31~2^31-1 32bits
  cout << "int Maximum =        " << numeric_limits<int>::max() << '\n';
  cout << "long Minimum =      " << numeric_limits<long>::min() << '\n';  // 32bits
  cout << "long Maximum =       " << numeric_limits<long>::max() << '\n';
  cout << "long long Minimum = " << numeric_limits<long long>::min() << '\n';  // 64bits
  cout << "long long Maximum =  " << numeric_limits<long long>::max() << '\n';
  cout << "unsigned-Maxima (Minimum ist 0):\n";          // ebenfalls neue Zeile
  cout << "unsigned int  =      " 
       << numeric_limits<unsigned int>::max() << '\n';
  cout << "unsigned long =      " 
       << numeric_limits<unsigned long>::max() << '\n';
  cout << "unsigned long long = " 
       << numeric_limits<unsigned long long>::max() << '\n';
  cout << "Anzahl der Bytes für:\n";
  cout << "int       " << sizeof(int) << '\n';
  cout << "long      " << sizeof(long) << '\n';
  cout << "long long " << sizeof(long long) << '\n';
}