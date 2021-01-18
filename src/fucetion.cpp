#include "function.h"

void Function::set_number1(int number1){
  this->number1 = number1;
}
void Function::set_number2(int number2){
  this->number2 = number2;
}
int Function::get_add(){
  return number1+number2;
}
int Function::get_minuse(){
  return number1-number2;// this is error, and try test can get this error or not
}
