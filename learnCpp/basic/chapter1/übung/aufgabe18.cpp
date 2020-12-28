#include <iostream>
#include <string>
using namespace std;

int main()
{
  const string str{"17462309"};          // aus Aufgabentext
  long int z = 0;
  int quersumme = 0;
  // for (int i = 0; i < str.size(); i++) {
  for (size_t i = 0; i < str.size(); i++) {  // ,size_t的取值range是目标平台下最大可能的数组尺寸,一些平台下size_t的范围小于int的正数范围,又或者大于unsigned int.
    z *= 10;
    z += static_cast<int>(str[i]) - static_cast<int>('0');  // static_cast<int> 转换出来的是Ascii
	quersumme += static_cast<int>(str[i]) - static_cast<int>('0');
  }
  cout << "z = " << z;
  cout << "   Quersumme = " << quersumme << '\n';
  
  // 另一种写法
  long int z2 = 0;
  for (auto zeichen : str) {  // auto 声明变量时根据初始化表达式自动推断该变量的类型
    z2 *= 10;
    z2 += static_cast<int>(zeichen) - static_cast<int>('0');
  }
}
