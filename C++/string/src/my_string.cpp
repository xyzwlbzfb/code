#include "../include/my_string.h"

namespace MyString {
// 默認構造函數
// 建立一個「空字串」，內容只有 '\0'
string::string() : _data(new char[1]), _size(0), _capacity(0) {
  _data[0] = '\0';
}
// c-style string
string::string(const char *s) {
  // 如果s是空指標
  if (s == nullptr) {
    _size = 0;
    _capacity = 0;
    _data = new char[1];
    _data[0] = '\0';
  }
  // 如果不是空指標
  else {
    _size = strlen(s);
    _capacity = _size;
    _data =
        new char[_size +
                 1]; // strlen 只會計算到'\0'前面，所以要再多看一個位置給'\0'
    strcpy(_data, s);
  }
}
// (默認拷貝為淺拷貝，如果直接用淺拷貝會導致釋放空間時會重複釋放的問題)
string::string(const string &s) {
  std::cout << "[Log] 觸發深拷貝構造(調用於初始化一個不存在的物件)"
            << std::endl;
  _size = s._size;
  _capacity = s._capacity;
  _data = new char[_size + 1]; // 自己開一個空間這樣就不會共用一塊空間
  strcpy(_data, s._data);
}
// 析構
string::~string() {
  delete[] _data; // delete[] 對應 new[]
  _data = nullptr;
}
// 返回c-style 字串
// *注意這裡類型要先放
const char *string::c_str() const { // 確保return的內容不可被修改
  return _data;
}
// 運算符重載
// (1) 賦值運算符重載
string &string::operator=(const string &s) {
  std::cout << "[Log] 觸發深拷貝賦值(我是兩個物件都存在時才調用)" << std::endl;
  // 1. 先判斷是否是自己賦值給自己
  if (this == &s) {
    return *this;
  }
  // 2. 先將自己的原本空間先釋放掉
  delete[] _data;
  // 3. 將s的內容給*this
  _size = s._size;
  _capacity = s._capacity;
  _data = new char[_size + 1];
  strcpy(_data, s._data);

  return *this; // 為了支持連續賦值 (s1 = s2 = s3)的情況
}
size_t string::size() { return string::_size; }

} // namespace MyString
