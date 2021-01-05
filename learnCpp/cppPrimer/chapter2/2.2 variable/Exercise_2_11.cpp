#include<iostream>
// extern声明或者定义的变量可以被其他文件访问

// 声明使得名字为程序所知(A declaration makes a name known to the program)
// 定义负责创建实体(A definition creates the associated entity)
extern int ix =1024;  // 定义
extern int iz;  // 声明
int iy; //声明并定义


int main(){
	return 0;
}