#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    float a[5] = {56.5, 55.7, 33.7, 44.6, 77.6};
    int b[8] = {4, 55, 3, 66, 8, 1, 3, 4};
    char c[6] = {'2', '8', '6', '6', '4', '3'};
    for (; i < 5; i++)
    {
        cout << a[i] << endl;
        /* code */
    }
    for (i = 0; i < 8; i++)
    {
        /* code */
        cout << b[i] << " ";
    }
    for (i = 0; i < 6; i++)
    {
        /* code */
        cout << c[i] << endl;
    }
    return 0;
}