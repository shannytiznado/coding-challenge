// This is a simple C++ program that takes two numbers as input and returns their sum.

#include <iostream>

int main() {
  int num1 = 0;
  int num2 = 0;

  std::cout << "Enter the first number: ";
  std::cin >> num1;

  std::cout << "Enter the second number: ";
  std::cin >> num2;

  int sum = num1 + num2;

  std::cout << "The sum is: " << sum << std::endl;

  return 0;
}