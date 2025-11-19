#include <iostream>
#include <string>

int main() {
    std::string validPassword = "1010";
    std::string userPassword;

    std::cout << "Enter the password: ";
    std::cin >> userPassword;

    switch (userPassword == validPassword) {
        case true:
            std::cout << "Access granted." << std::endl;
            break;
        case false:
            std::cout << "Access denied." << std::endl;
            break;
    }

    return 0;
}
