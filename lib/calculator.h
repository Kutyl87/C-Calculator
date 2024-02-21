class Calculator {
  bool isRunning = false;

public:
  void pressRun();
  double add(double first_number, double second_number);
  double subtract(double first_number, double second_number);
  double multiply(double first_number, double second_number);
  double divide(double first_number, double second_number);
  double square(double number);
  bool getStatus();
};