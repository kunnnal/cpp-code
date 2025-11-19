
#include <iostream>
using namespace std;

int main()
{
    int a[50][50], i, j, sum = 0;
    int n, m, max = 0, min ;
    cout << "how many rows you want:" << endl;
    cin >> n;
    cout << "how many columns you want:" << endl;
    cin >> m;
    cout << "enter " << n * m << " data" << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "here your table" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

//    find maximum value
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
    }
    // find minumum value
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (min > a[i][j])
                min = a[i][j];
        }
    }
// sum of the values 
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
    }

    cout << "Maximum value: " << max << endl;
    cout << "minumum value:" << min << endl;
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
