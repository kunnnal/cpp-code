#include<iostream>
using namespace std;
int main()
{
    float b [100];
    int i,n;
    cout << "enter the number of elements:";
    cin>>n;
    cout<<"enter the data now"<<endl;
    for ( i = 0; i < n; i++)
    {
        cin>>b[i];

        /* code */
    }
    for ( i = 0; i <n; i++)

    {
       b[i]=b[i]+b[i]*5.0/100.0;
        /* code */
    }
    for( i = 0; i < n; i++) {
        cout<<b[i]<<" "<<endl;
    }   
    
    return 0;
}