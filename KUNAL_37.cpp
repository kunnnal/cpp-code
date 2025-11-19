#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int *p[5];
    int *d, c;
    d = &c;
    cout << *p;
    cout << *(p + 2);
    cout << *(p + 4);
    return 0;
}