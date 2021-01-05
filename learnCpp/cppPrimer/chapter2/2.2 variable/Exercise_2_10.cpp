#include<iostream>

std::string global_str;  // 不论是全局还是局部变量都初始化为空串
int global_int;  // 全局int，初始化为0

int main(){
	int local_int;  // 局部int，不初始化，可能为一个奇怪的数字
	std::string local_str;
}