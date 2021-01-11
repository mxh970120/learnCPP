#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main(){
	string s1 = "Hallo, World!";

	for (auto c : s1){
		cout << c << endl;
	}

	for (auto &c : s1){
		c = toupper(c);
		cout << c << endl;
	}

	if (!s1.empty()){
		cout << s1[0] << endl;
	}


	return 0;
}