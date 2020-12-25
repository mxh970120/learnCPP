#include<iostream>

// enumeration 枚举
// 枚举数据类型是一种由程序员定义的数据类型，其合法值是与它们关联的一组命名整数常量。
enum Roster {Tom, Sharon, Bill, Teresa, John};
// 该语句将创建一个名为 Roster 的数据类型。默认情况下，编译器设置第一个枚举量为 0，下一个为 1，以此类推。
// 在上述示例中，Tom 的值将是 0，Sharon 的值为 1，等等。最后一个枚举量 John 的值为 4。
// 类似于#define TOM 1
enum Roster2 {Tom2 = 9, Sharon2 = 110, Bill2, Teresa2, John2};
// 值也可以修改，默认升序。此时Bill2 = 111

// 但是要注意命名冲突带来的问题
// 比如：
// enum Color {RED,BLUE}; 
// enum Feeling {EXCITED,BLUE};
// 需要写成：
enum class Color {RED,BLUE};
enum class Feeling {EXCITED,BLUE};
// 这是因为两个枚举类的命名有相同的BLUE

int main() 
{
	// 赋值的区别
	Roster student = Tom;
	Color c = Color::RED;
    return 0;
	
	//student = 1; 报错，不能这么赋值
	if (student == Bill){}
	if (student == 2){}
	
}