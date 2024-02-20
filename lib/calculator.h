class Calculator {
  bool isRunning = false;

public:
  void pressRun();
  double add(double first_number, double second_number);
  double subtract(double first_number, double second_number);
  bool getStatus();
};