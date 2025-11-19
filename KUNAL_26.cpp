#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i;
    cout << "enter the value of array";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i] ;

        /* code */
    }
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    for (i = 0; i <10 ; i++)
    {
        a[i] = a[i] + 10;
    }
    for (i = 0; i < 10; i++)

    {
        cout << a[i] << endl;
        /* code */
    }
    return 0;
}
