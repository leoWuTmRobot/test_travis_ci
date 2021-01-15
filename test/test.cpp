#include "gtest/gtest.h"
#include "../src/function.h"

class FunctionTest : public testing::Test {
 protected:
  virtual void SetUp(){}
    
};

TEST_F(FunctionTest,add_test){
  Function f;
  f.set_number1(1);
  f.set_number2(3);
  EXPECT_EQ(f.get_add(),4);
}
TEST_F(FunctionTest,minuse_test){
  Function f;
  f.set_number1(1);
  f.set_number2(3);
  EXPECT_EQ(f.get_minuse(),-2);
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
