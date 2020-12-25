#include<iostream>

// const含义: 常类型是指使用类型修饰符const说明的类型，常类型的变量或对象的值是不能被更新的。

int main(){
	// 作用
    // 1. 可以定义常量	
	const int a=100;
	// 2. 类型检查:
	// const常量与#define宏定义常量的区别：~~const常量具有类型，编译器可以进行安全检查；
	// #define宏定义没有数据类型，只是简单的字符串替换，不能进行安全检查。
	// 3. 防止修改，起保护作用，增加程序健壮性
	// 4. 可以节省空间，避免不必要的内存分配:
	// const定义常量从汇编的角度来看，只是给出了对应的内存地址，所以，const定义的常量在程序运行过程中只有一份拷贝.
	// #define给出的是立即数, #define定义的常量在内存中有若干个拷贝。
	
	// 指针
	const char * a1; //指向const对象的指针或者说指向常量的指针。
	char const * a2; //同上
	char * const a3; //指向类型对象的const指针。或者说常指针、const指针。
	const char * const a4; //指向const对象的const指针。
	// 如果const位于*的左侧，则const就是用来修饰指针所指向的变量，即指针指向为常量；
	// 如果const位于*的右侧，const就是修饰指针本身，即指针本身是常量。
	
	
	
}

// 非const变量默认为extern。要使const变量能够在其他文件中访问，必须在文件中显式地指定它为extern。
extern const int ext1=12;
int ext2