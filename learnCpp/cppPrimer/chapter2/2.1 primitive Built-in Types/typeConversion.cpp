#include<iostream>

int main(){
	bool b =42;
	std::cout<< b <<std::endl; //0-->true, other-->False; true-->1, false-->0
	
	int i = 3.14;  //
	std::cout<< i <<std::endl; //truncate
	
	double pi = 3;
	std::cout<< pi <<std::endl;
	
	unsigned char c = -1; // 8bit,
	std::cout<< c <<std::endl;
	
	signed char c2 = 256; // 8bit 0-255
	std::cout<< c2 <<std::endl;
	
	unsigned u = 10;
	int i2 = -42;
	std::cout<<i2+i2<<std::endl;
	std::cout<<i2+u<<std::endl; // int converted to unsingned --> error!
	
	for(unsigned u=10; u>=0; --u){ // nerver stop
		std::cout<<u<<std::endl;
	}
	
	return 0;
}