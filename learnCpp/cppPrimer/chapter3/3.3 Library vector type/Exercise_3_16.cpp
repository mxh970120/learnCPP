#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v1;
	cout << v1.size() <<endl;
	if(v1.size()>0){
		for(auto e:v1){
			cout<<e<<" ";
		}
		cout<<endl;
	}

	return 0;
}