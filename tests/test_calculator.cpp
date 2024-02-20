#include "calculator.h"
#include <gtest/gtest.h>

TEST(BasicTest, TestPass) {
  Calculator calc = Calculator();
  EXPECT_EQ(calc.getStatus(), false);
}

int main(int argc, char **argv) {
  Calculator calc = Calculator();
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}