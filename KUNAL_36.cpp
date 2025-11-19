#include <iostream>
using namespace std;
int main()
{
    int a[5] = {5, 89, 12, 18};
    char c[5] = {'a', 'b', 'c', 'd', 'e'};
    int i[5];
    float f[5];
    cout << *c;
    cout << *(c + 1);
    cout << *(c + 2);
    cout << *(c + 3);
    cout << *(c + 4)<<endl;
    cout << *(i + 0) << endl;

    cout << (i + 1) << endl;

    cout << *(i + 2) << endl;

    cout << *(i + 3) << endl;
    return 0;
}