#include <iostream>

// namespace test {
// int n = 5;
// }
// using namespace test;
// // int n = 6;
// namespace test {
// void func1() { std::cout << "I am the function added later" << std::endl; }
// } // namespace test
// int main() {
//   //   int n = 4;
//   std::cout << n << std::endl;
//   func1();
//   return 0;
// }
// /*

// 變量訪問的順序: 當前作用域 - 全局作用域 -
// 命名空間作用域(要先展開命名空間或使用作用域解析運算符訪問)
// */

// class A {
// private:
//   int a;
//   double b;
//   char c;
// };
// int main() {
//   std::cout << sizeof(A) << std::endl;
//   return 0;
// }

// class Base {
// public:
//   Base(int a = 3, double b = 2.5, char c = 'a') : _a(a), _b(b), _c(c) {}
// private:
//   int _a;
//   double _b;
//   char _c;
// };
// class Derived : public Base {
// public:
//   Derived(int a = 1, double b = 3.2, char c = 1) : d_a(a), d_b(b), d_c(c) {};
// private:
//   int d_a;
//   double d_b;
//   char d_c;
// };
// int main() {
//   Base *base = new Derived();
//   return 0;
// }

// void Print(int x) {
//   std::cout << "This is a int function!" << std::endl;
//   std::cout << x << std::endl;
//   return;
// }
// template <class T>
// void Print(T x){
//     std::cout << "This is a template function!" << std::endl;
//     std::cout << x << std::endl;
//     return;
// }


// int main(){

//     int x = 5;
//     double y = 6;
//     Print(x);
//     Print(y);
//     return 0;
// }