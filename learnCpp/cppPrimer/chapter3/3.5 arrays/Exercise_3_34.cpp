#include <iostream>

int main(){
	int a[10];
	for(int i = 0; i < 10; i++){
		a[i]=i;
	};
	int *p = std::begin(a);
	while (p != std::end(a)) {
		*p = 0;
		p++;
	};
	for(auto val : a){
		std::cout<<val<<" ";
	};
	std::cout<<std::endl;
}