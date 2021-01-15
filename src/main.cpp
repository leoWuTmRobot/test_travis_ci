#include "function.h"
#include <iostream>
int main(){
  Function f;
  f.set_number1(1);
  f.set_number2(3);
  std::cout<<"total number is"<<f.get_add()<<std::endl;
}
