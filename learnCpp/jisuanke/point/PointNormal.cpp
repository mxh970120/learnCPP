#include<iostream>
using namespace std;
int main(){
	// int* 类型的指针会从指定地址向后寻找4个字节，double* 为8个
	int a[3] = {1, 2, 3};
	int *p;
	p = &a[0];
	
	// 可以把数组名当做值不能改变的指针来使用
	// 但是它不是指针
	printf("%d, %d\n", *a, *(a+1));
	
	// 空指针
	int *ptr = NULL
	
}