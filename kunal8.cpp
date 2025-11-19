#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,m,d1,d2,d3,sum;
    n=123;
    m=n;
    d1=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    sum=d1+d2+d3;
    std::cout << sum << std::endl;    
    return 0;
}
