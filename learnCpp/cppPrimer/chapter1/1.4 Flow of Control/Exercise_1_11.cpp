#include<iostream>

int main(){
	int sum = 0;
	int v1,v2;
	std::cin>>v1>>v2;
	
    if(v1>v2){
		while (v1 >= v2){
			std::cout<<v1<<" ";
			v1--;
		}
	}else{
		while (v2 >= v1){
			std::cout<<v2<<" ";
			v2--;
	}
	}
	
	return 0;
}