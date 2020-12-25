#include<iostream>
using namespace std;

// 这玩意了解即可，后面用lambda表达式
void printFloat (float data){
	cout<<"the data to print is "<< data << endl;
}

int main(){
	// 定义函数指针，形参和返回值应该与函数相同
	void (* func_ptr)(float);
	func_ptr = printFloat;  // 给函数指针赋值
	func_ptr(3.01);
	
}