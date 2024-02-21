#include "calculator.h"
#include <gtest/gtest.h>
#include <stdexcept>
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

TEST(CalculatorTests, testMultiply) {
  Calculator calc = Calculator();
  EXPECT_EQ(calc.multiply(2, 3), 6);
}

TEST(CalculatorTests, testDivide) {
  Calculator calc = Calculator();
  EXPECT_EQ(calc.divide(6, 3), 2);
}

TEST(CalculatorTests, testDividebyZeroErrorThrow) {
  Calculator calc = Calculator();
  EXPECT_THROW(calc.divide(6, 0), std::invalid_argument);
}

TEST(CalculatorTests, testDividebyZeroErrorThrowMessage) {
  Calculator calc = Calculator();
  try {
    calc.divide(6, 0);
  } catch (std::invalid_argument &e) {
    EXPECT_STREQ(e.what(), "Cannot divide by zero!");
  }
}
TEST(Calculator, testSquare) {
  Calculator calc = Calculator();
  EXPECT_EQ(calc.square(2), 4);
}
int main(int argc, char **argv) {
  Calculator calc = Calculator();
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}