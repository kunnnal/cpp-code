
#include <iostream>
using namespace std;
int main()
{
    int a[100], i, n,sum=0;
    cout << "how many data you want to add in array:";
    cin >> n;
    // enter the value of array
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        /* code */
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i]<<" "<<endl;
        /* code */
    }
    // value of sum 
    for ( i = 0; i < n; i++)
    {
        sum=sum+a[i];

        /* code */
    }
    cout<<sum<<endl;
    for ( i =n-1; i >=0; i--)
    {
        cout<<a[i]<<" ";
        /* code */
    }
    // adding 5 in this array value
    for ( i = 0; i < n; i++)
    {
        a[i]=a[i]+5;
        /* code */
    }
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<" "<<endl;
        /* code */
    }
    
    
    return 0;
}