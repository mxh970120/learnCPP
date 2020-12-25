#include <iostream>
using namespace std;

int main()
{
	int a1;
	int a2;
	int a3;
	cout << "Geben a1, a2 und a3\n";
	cout << "Geben Sie drei ganze Zahlen ein: ";
	cin >> a1 >> a2 >> a3;
    if (a2 < a1){
		cout<< "a2 soll größer als a1!"<<endl;
	}else{
		if ((a3<a2) && (a3>a1)){
			cout<<"In das Bereich"<<endl;
		}else{
			cout<<"nicht in das Bereich!"<<endl;
		}
	}
	
}
