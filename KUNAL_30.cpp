#include <iostream>
using namespace std;
int main()
{
    int a[100], i, n, sv, f = 0;
    cout << "how many data you want to enter :";
    cin >> n;
    cout << "enter the data now:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        /* code */
    }
    cout << "enter the data which  you want to search for:";
    cin >> sv;
    for (i = 0; i < n; i++)
    {

        /* code */
        if (a[i] == sv)

        {
            /* code */
            f = 1;
            break;
        }
    }
    if (f == 1)
        cout << "data found "<< endl;
    else
        cout << "data not found: " << endl;

    return 0;
}