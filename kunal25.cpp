#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
     cout<<"enter the value of c:";
    cin>>c;
     if (a>b)
     {
        if(a>c)
        cout<<a;
        else
        cout<<b;}
        else if(b>c)
        cout<<b;
        else
        cout<<c;
            return 0 ;
     }

