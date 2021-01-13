#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec;
	for (int i = 1; i <= 10; ++i)
		ivec.push_back(i);

	for (auto it = ivec.begin(); it != ivec.end(); ++it){
		*it *= 2;
		cout << *it << " ";
	}

	return 0;
}