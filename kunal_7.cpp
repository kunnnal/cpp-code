#include <iostream>
using namespace std;
int main()
{
    int numberMonth;
    cout << "Enter the number btw 1-12:";
    cin >> numberMonth;
    switch (numberMonth)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days";

        break;
    case 2:
        cout << " 28 days" ;break;
    default:
        cout << "30 days";
    }
    return 0;
}