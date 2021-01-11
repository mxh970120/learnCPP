#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	string s;
	cin >> s;

	for (auto c : s)
		if (!ispunct(c))
			cout << c << endl;

	return 0;
}