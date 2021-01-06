#include <iostream>
#include <cstdlib>

int main(){
	int ival = 42;
	int *p = &ival;  // p hold address of ival
	std::cout<<p<<std::endl;
	std::cout<<*p<<std::endl;
	
	double dval;
	double *pd = &dval;  // 初值为地址
	double *pd2 = pd;  // 初值为指针
	
	
	// null pointer
	// 如果将0赋给一个指针，绝对不能使用该指针指向的内容！！！
	// 空指针可以确保不指向任何对象或函数
	int *p1 = nullptr;
	int *p2 = 0;
	int *p3 = NULL; // must #include <cstdlib>
	
	void *pv = &ival;  // void指针可以指向任意对象
	
	int ival2 = 42;
	int *p4 = &ival2;  
	std::cout<<p4<<std::endl;
	int **p5 = &p4;  // pointer to pointer
	std::cout<<p5<<std::endl;
	int *&r = p4;  // reference to pointer
	std::cout<<r<<std::endl;
}