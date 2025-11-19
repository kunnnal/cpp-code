#include <iostream>

int main() {
    int number;

    // Get input from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is odd or even
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
