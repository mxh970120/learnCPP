#include<iostream>
/*
 * simple main function:
 * read two numbers and write their sum
 * comment pairs /* */ cannot nest
 */
using namespace std;

int main(){
	// prompt user to enter two numbers
	cout<<"Enter two numbers:"<<endl;
	int v1 = 0, v2 = 0;
	cin>>v1>>v2;
	cout<<"The sum of "<<v1<<" and "<<v2<<" is "<<v1+v2<<endl;
	
	return 0;
}
