#include <iostream>
// C++结构体中不仅可以定义数据，还可以定义函数。
// C++结构体中可以使用访问修饰符，如：public、protected、private 。
// C++结构体使用可以直接使用不带struct。
// C++继承
// 若结构体的名字与函数名相同，可以正常运行且正常的调用！但是定义结构体变量时候要带struct！例：struct Punkt p

using namespace std;
enum class Farbtyp { rot, gelb, gruen };

struct Punkt {
  int x;
  int y;
  bool istSichtbar;
  Farbtyp dieFarbe;
};

int main()
{
  // constexpr是C++11引入的关键字，用于编译时的常量与常量函数。
  // 声明为constexpr函数的意义是：如果其参数均为合适的编译期常量，则对这个constexpr函数的调用就可用于期望常量表达式的场合（如模板的非类型参数，或枚举常量的值）。
  // 如果参数的值在运行期才能确定，或者虽然参数的值是编译期常量，但不匹配这个函数的要求，则对这个函数调用的求值只能在运行期进行。
  // 比如：
  // constexpr int get_five() {return 5;}
  // int some_value[get_five() + 7]; // Create an array of 12 integers. Valid C++11
  constexpr Punkt p1{100, 200, false, Farbtyp::gelb};  // Aggregat-Initialisierung
  cout << "p1.x = " << p1.x << "  p1.y = " << p1.y
       << "  p1.istSichtbar= " << p1.istSichtbar
       << "  p1.dieFarbe= " << static_cast<int>(p1.dieFarbe) << '\n';
}
