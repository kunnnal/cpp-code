
#include <iostream>
#include <string>
using namespace std;

int main() {
    string temp, humidity;
    int result1, result2, result3, result4;

    cout << "Enter the temperature: ";
    cin >> temp;
    cout << "Enter the Humidity: ";
    cin >> humidity;
    if (temp == "warm" && humidity == "dry")
        cout << "Play Basketball" << endl;
    else if (temp == "cold" && humidity == "humid")
        cout << "Swim" << endl;
    else if (temp == "cold" && humidity == "dry")
        cout << "Play Cricket" << endl;
    else if (temp == "warm" && humidity == "humid")
        cout << "Tennis" << endl;
    else
        cout << "Invalid" << endl;

    return 0;
}
