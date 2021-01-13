#include <string>
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::string;
using std::endl;

int main(){
	string s("some string");
	if(s.begin() != s.end()){
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout << s << endl;

	vector<int>::iterator it;
	string::iterator it2;
	vector<int>::const_iterator it3;  // only read
	string::const_iterator it4; // only read

	auto s1 = s.cbegin();  // only read
	auto s2 = s.cend();  // only read

	vector<string> text = {"some string"};
	for (auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it){
		cout << *it << endl;
	}

	auto mid = text.begin() + text.size()/2;
	cout << *mid << endl;

}