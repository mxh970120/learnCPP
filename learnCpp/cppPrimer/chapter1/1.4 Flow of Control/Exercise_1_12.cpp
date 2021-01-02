#include<iostream>

int main(){
	int sum = 0;
	for (int val = -100; val<=100; ++val){
		sum+=val;
	}
	std::cout<<"sum is "<<sum<<std::endl;
	
	return 0;
}