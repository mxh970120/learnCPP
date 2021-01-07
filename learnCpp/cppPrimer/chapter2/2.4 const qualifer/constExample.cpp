#include <iostream>

int main(){
	const int bufSize = 512;
	
	const int &r1 = bufSize;
	// int &r2 = bufSize;  // Error must const reference to a const object
	
	int i = 42;
	const int &r3 = i; 
	const int *p3 = &i;
	
	// top-level const
	const int v2 = 0;  // 顶层const，整型常量
	const int *const p4 = &i;  // 顶层const，整型常量指针
	
	const int *p2 = &v2;  // 底层const，仅表示所指对象为常量
	const int &r2 = v2;
	
	// 底层const赋值必须注意，不能把低等级赋值给高等级（非const=const 同理），会报错
	
	// constexpr int sz = size(); 允许编程者保证函数或对象的构造函数是编译时常量
}