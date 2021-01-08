#include<iostream>

int main(){
	int i = 0, &r = i;
	auto a = r;  // a是个整数
	const int ci = i, &cr = ci;
	auto b = ci;  // b是个整数，但不是const
	auto c = cr;  // c是个整数，也不是const
	auto d = &i;  // d是个整型指针
	auto e = &ci; // e是一个指向整型常量的指针
	auto &g = ci;  // g是一个整型常量引用，绑定到ci
	
	std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<g<<" "<<std::endl;
	
	a = 42;
	b = 42;
	c = 42;
	//d = 42;  // 错误，d是指针
	//e = 42;  // 错误，e是指针
	//g = 42;  // 错误，g是常量引用（const）
	std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<g<<" "<<std::endl;
	return 0;
	
}