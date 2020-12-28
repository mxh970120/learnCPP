#include <iostream>
#include <string>                      
using namespace std;

int main()        
{  
  string einString {"hallo"};             
  cout << einString << '\n';          

  for (size_t i = 0; i < einString.length(); ++i) {
    cout << einString[i];
  }
  cout << '\n';

string a{"Albert"};
  string b{a};
  if (a == b) {
    cout << a << " == " << b << '\n';
  }
  else {
    cout << a << " != " << b << '\n';
  }
}  