#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string s("Hello World");
	cout << s << endl;

	for (auto &c : s)
		c = 'X';

	cout << s << endl;

	string s2("Hello World");
	cout << s2 << endl;

	for (char &c : s2)
		c = 'X';

	cout << s2 << endl;

	return 0;
}