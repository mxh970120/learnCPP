#include<iostream>

int main(){
	int sum = 0, val = 10;
	// keep executing the while as long as val is less than or equal to 10
	while (val>=0){
		sum += val;
		val--;
	}
	std::cout<< "sum of 10 to 0 inclusive is "<< sum << std::endl;
	
	return 0;
}