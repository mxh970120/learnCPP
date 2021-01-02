#include<iostream>

int main(){
	int sum = 0;
	for (int val = 50; val<=100; ++val){
		sum+=val;
	}
	std::cout<<"sum is "<<sum<<std::endl;
	
	int sum2 = 0;
	for (int val = 10; val>=0; --val){
		sum2+=val;
	}
	std::cout<<"sum is "<<sum2<<std::endl;
	
	return 0;
}