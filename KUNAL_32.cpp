
#include<iostream>
using namespace std;

int main()
{
    int a[50][50], i, j;
    int n, m;

    cout << "How many rows: " << endl;
    cin >> n;
    cout << "How many columns: " << endl;
    cin >> m;
    cout << "Enter " << n * m << " data:" << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
