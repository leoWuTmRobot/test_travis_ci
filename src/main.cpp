#include "function.h"
#include <iostream>

void this_function_not_exec(){
  std::cout<<"this function not exec"<<std::endl;
}

void this_function_will_exec_twice(){

  std::cout<<"this function exec twice"<<std::endl;
}

int main(){
  Function f;
  f.set_number1(1);
  f.set_number2(3);
  this_function_will_exec_twice();
  std::cout<<"total number is"<<f.get_add()<<std::endl;
  this_function_will_exec_twice();
}
