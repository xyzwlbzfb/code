#include "../include/my_string.h"

int main() {
  MyString::string s1("Hello");
  MyString::string s2 = s1; // 觸發拷貝構造
  std::cout << &s2 << std::endl;
  std::cout << &s1 << std::endl;
  MyString::string s3;
  s3 = s1; // 觸發拷貝賦值

  std::cout << "s1: " << s1.c_str() << " at " << (void *)s1.c_str()
            << std::endl;
  std::cout << "s2: " << s2.c_str() << " at " << (void *)s2.c_str()
            << std::endl;
  return 0;
}