#include "calculator.h"

void Calculator::pressRun() { isRunning = !isRunning; }
double Calculator::add(double first_number, double second_number) {
  return first_number + second_number;
}
double Calculator::subtract(double first_number, double second_number) {
  return first_number - second_number;
}
bool Calculator::getStatus() { return isRunning; }