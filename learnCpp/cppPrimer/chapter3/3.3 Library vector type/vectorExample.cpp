#include <vector>
#include <string>
using std::vector;
using std::string;

int main(){
	vector<string> articles = {"a", "an", "the"};  // must {}

	vector<int> ivec(10, -1);
	vector<int> ivec2(10);
	vector<string> svec(10);
	vector<string> svec2(10, "hello");

	vector<int> v2;
	for(int i = 0; i != 100; ++i){
		v2.push_back(i);
	}
	
}