// write a program to check whether a number is divisible by 5 and 11 or  not
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<< "enter the value of variable:";
    cin>>a ;
    if (a%5==0&& a%11==0)

        cout<<"the given no.is divisible by both 5 &  11";  
        else
        cout << "not divisible ";
        return 0;
}