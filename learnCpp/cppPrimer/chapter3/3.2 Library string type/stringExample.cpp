#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main(){
	string s1;
	string s2 = s1;
	string s3 = "hiya";  // s3 is a copy of the string literal
	string s4(10, 'c');  // "" error!
	string s5 = s3 + s4;
	cout << s5 << endl;

	string s;
	cin >> s;

	string line;
	// 每次读取一整行，直至到达文件尾
	while (getline(cin, line))
		if (!line.empty()){
			cout << line << endl;
			cout << line.size()<<endl;
		}

	return 0;
}