#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main()
{
	int a = 0;
	vector<int> ivec;
	while (cin >> a) {
		ivec.push_back(a);
	}

	return 0;
}