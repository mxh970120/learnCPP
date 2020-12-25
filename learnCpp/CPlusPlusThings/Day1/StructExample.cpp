#include<iostream>
using namespace std;

// sizeof(struct student)的值为12bytes。
struct student
{
     char mark;
     long num;
     float score;
};

//相同的内存地址
// sizeof(union test)的值为4。因为共用体将一个char类型的mark、一个long类型的num变量和一个float类型的score变量存放在同一个地址开始的内存单元中，
// 而char类型和long类型所占的内存字节数是不一样的，但是在union中都是从同一个地址存放的，也就是使用的覆盖技术，这三个变量互相覆盖，
// 而这种使几个不同的变量共占同一段内存的结构，称为“共用体”类型的结构。
// 因union中的所有成员起始地址都是一样的，所以&a.mark、&a.num和&a.score的值都是一样的。
union test 
{
    struct { int x; int y; int z; }u; // 结构体嵌套
    int k; 
}; 

int main() 
{ 
	union test a;
    a.u.x = 4;
    a.u.y = 5; 
    a.u.z = 6; 
    a.k =  7; //覆盖掉第一个int空间值
    printf("%d %d %d %d\n", a.u.x, a.u.y, a.u.z, a.k);
    system("pause");
    return 0;
}