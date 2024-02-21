#include "calculator.h"
#include <stdexcept>
void Calculator::pressRun() { isRunning = !isRunning; }
double Calculator::add(double first_number, double second_number) {
  return first_number + second_number;
}
double Calculator::subtract(double first_number, double second_number) {
  return first_number - second_number;
}
bool Calculator::getStatus() { return isRunning; }

double Calculator::multiply(double first_number, double second_number) {
  return first_number * second_number;
}
double Calculator::divide(double first_number, double second_number) {
  if (second_number == 0) {
    throw std::invalid_argument("Cannot divide by zero!");
  };
  return first_number / second_number;
}