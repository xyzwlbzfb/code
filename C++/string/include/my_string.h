#pragma once

#include <cstring>
#include <iostream>

namespace MyString {

class string {
public:
  // 1. 默認構造函數 (Default Constructor)
  // 創建一個空的字符串，通常分配 1 字節存儲 '\0'
  string();
  // c_string style
  string(const char *s);
  // 拷貝構造
  string(const string &s);
  // 析構函數(因爲我們有用到new 所以不能使用默認的析構函數)
  ~string();
  // 返回c-style的字串
  const char *c_str() const;
  // 運算符重載
  // (1) 賦值運算符重載
  string &operator=(const string &s);
  // 返回字串的大小
  size_t size();

private:
  char *_data;      // 指向字串的開頭
  size_t _size;     // 字串的大小
  size_t _capacity; // 空間
};

} // namespace MyString
