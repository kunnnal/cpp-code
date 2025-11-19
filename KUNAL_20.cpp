#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"Enter the number:";
    while(i<=10)
    {
     cin>>n;

        sum=sum+n;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}