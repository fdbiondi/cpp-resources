#include <iostream>

int main() {
  // Exercise 1
  double celciusTemp = 0;

  std::cout << "Enter temperature in Celsius degrees: ";
  std::cin >> celciusTemp;

  // Formula (0 °C × 9/5) + 32 = 32 °F
  double fahrenheitTemp = celciusTemp * ((float)9 / 5) + 32;

  std::cout << "Temperature " << fahrenheitTemp << " °F" << std::endl;

  return 0;
}
