#include <iostream>
using namespace std;
class first
{
    private:
    float a,b,c,x;
    public:
    void assign()
    {
        a=5 ;
        b=3;
        c=23;
    }

    void input()
    {cout<<"Enter the value of a:";cin>>a;
    cout<<"Enter the value of b:";cin>>b;
    cout<<"Enter the value of c:";cin>>c;
    }
    void setdata(float x,float y,float z)
    {
        a=x;b=y;c=z;
    }

    void call()
    {
        x=(a+b)/c;
        cout<<x;
    }
};
int main ()
{
    first o1;
    o1.assign();
    o1.input();
    o1.call();
    return 0;
}