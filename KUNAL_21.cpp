#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c = 0;
    cout << a << endl;
    cout << b << endl;

    while (c <233)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}