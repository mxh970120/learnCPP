// 以一个普通表达式作为参数，返回该表达式的类型,而且decltype并不会对表达式进行求值。

#include<iostream>

int main(){
	const int ci = 0;
	decltype(ci) x = 0 ;  //推导结果为const int。x的类型为const int。
	
	int i = 4;
    decltype(i) a; //推导结果为int。a的类型为int。
}