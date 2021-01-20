#include <iostream>

class Function{
 private:
  int number1 = 0;
  int number2 = 0;
 public:
  void set_number1(int number1);
  void set_number2(int number2);
  int get_add();
  int get_minuse();// this is error, and try test can get this error or not
  void this_function_is_not_test();
};
