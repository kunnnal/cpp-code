#include<iostream>
using namespace std;
int main()
{
    int a[50],i=0,n,c=0;
    cout<<"enter a decimal point:";
    cin>>n;
while (n>0)
{
    /* code */
    a[i]=n%2;
    n/2;
    i=i+2;
}
for (c=  i- 1; c>=0; c--)
{

    /* code */
    cout<<a[c]<<endl;
}


    return 0;
}