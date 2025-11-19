#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the value of n:";
    cin>> n ;
    if (n<=1){
        cout<< "not a prime number:";
    return -1;
    }
    for (int i = 2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            cout<<"Not Prime";
            return 0;

        }
    
    }
    cout << "Number is prime"<< endl;

    
    return 0;
}