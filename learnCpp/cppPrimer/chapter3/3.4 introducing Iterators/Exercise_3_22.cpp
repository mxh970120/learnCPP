#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> text = {"some string"};

	// 遍历全部字符串，空串停止
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
		// 遍历当期字符串
		for (auto s_it = it->begin(); s_it != it->end(); ++s_it) {
			*s_it = toupper(*s_it);
		}
		cout << *it << endl;
	}

	return 0;
}