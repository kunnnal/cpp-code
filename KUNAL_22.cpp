#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int d=0,n=0, m=0, sum = 0;
    cout << "Enter the value :";
    cin >>n;
    m=n;
    while (m>0)
    {
        d = m % 10;
        cout<<pow(d,3)<<endl;
        
        sum += d*d*d;
        m= m/10;       
    }
  cout << sum;
    if (n==sum)
    cout<<n<<" is Armstrong number:"<<endl;
    else
    cout<<"Not armstrong number:";

    return 0;
}