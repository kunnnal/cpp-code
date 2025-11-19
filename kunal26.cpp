// WAP to check wheather input number is negative positive or zero
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of variable: ";
    cin>>a;
    if(a>0)
    cout<< "positive:";
    else if (a<0)
    cout<<"Negative:";
    else
    cout << 0 ;
    return 0;
}