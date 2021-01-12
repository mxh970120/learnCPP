#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	vector<string> svec;
	string word;

	while (cin >> word)
		svec.push_back(word);
	
	for (auto &w : svec) {
		for (auto &q : w) {
			q = toupper(q);
		}
	}

	for (auto &w : svec)
		cout << w << endl;

	return 0;
}