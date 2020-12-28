#include <iostream>
using namespace std;

struct student
{
     char mark;
     long num;
     float score;
};

union test
{
     char mark;
     long num;
     float score;
};

int main(){
cout << sizeof(union test) << '\n';
cout << sizeof(struct student) << '\n';

}

// 我们需要几种不同类型的变量存在在同一段的内存空间中，就像上面的，我们需要将一个char类型的mark、一个long类型的num变量和一个float类型的score变量存放在同一个地址开始的内存单元中。
// 上面的三个变量，char类型和long类型所占的内存字节数是不一样的，但是在union中，它们都是从同一个地址存放的，也就是使用的覆盖技术，这三个变量互相覆盖，
// 而这种使几个不同的变量共占同一段内存的结构，称为“共用体”类型的结构。
// 尽量别用