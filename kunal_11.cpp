// //wap to calculate the square of least siginificant number is 5
#include <iostream>
using namespace std;

int findLeastSignificant5(int number) {
   int digit = number % 10;
   if (digit == 5)
      return 5;
   if (number == 0)
      return -1; // Return -1 if no 5 is found in the number.
   return findLeastSignificant5(number / 10);
}

int main() {
    int number;
    
    cout << "Enter a number: ";        
    cin >> number;
    
    int leastSignificantDigit = findLeastSignificant5(number);
    
    if (leastSignificantDigit != -1) {
        int square = number*number;
        
        cout << "The square of the least significant digit that is 5 is: " << square << endl;
    } else {
        cout << "There is no least significant digit that is 5 in the number." << endl;
    }
    
    return 0;
}

