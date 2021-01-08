#include<iostream>

int main(){
	typedef double wages; // wages 是数据结构double的别称
	typedef wages base, *p; // base是double的别称， p是指向一个double变量的指针
	
	typedef char* PCHAR; // 一般用大写
	PCHAR pa, pb; //同时声明了两个指向字符变量的指针
	char *pa2, *pb2;  // 也可行，但相对来说没有用typedef的形式直观，尤其在需要大量指针的地方，typedef的方式更省事。
}