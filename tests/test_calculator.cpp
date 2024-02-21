#include "calculator.h"
#include <gtest/gtest.h>

TEST(CalculatorTests, testStatus) {
  Calculator calc = Calculator();
  EXPECT_EQ(calc.getStatus(), false);
}
TEST(CalculatorTests, testPressRun) {
  Calculator calc = Calculator();
  calc.pressRun();
  EXPECT_EQ(calc.getStatus(), true);
}
TEST(CalculatorTests, testAdd) {
  Calculator calc = Calculator();
  EXPECT_EQ(calc.add(1, 2), 3);
}
TEST(CalculatorTests, testSubtract) {
  Calculator calc = Calculator();
  EXPECT_EQ(calc.subtract(2, 1), 1);
}

int main(int argc, char **argv) {
  Calculator calc = Calculator();
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}