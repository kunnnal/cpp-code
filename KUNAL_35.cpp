#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    int*ptr =arr;
    cout<<"element of the array"<<endl;
    for ( int i = 0; i < n; i++)
    {
        cout<<ptr[i]<<" ";
        ptr++;
        /* code */
    }
    
    return 0;
}