#include <iostream>
#include <cmath>

int main() {
  double number = 5;
  double square_root;

  // Use the sqrt() function to find the square root of the number.
  square_root = std::sqrt(number);

  // Print the square root to the console.
  std::cout << "The square root of " << number << " is " << square_root << std::endl;

  return 0;
}
