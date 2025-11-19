#include <iostream>
using namespace std;
class first
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void big(){ if (a > b)

    {
        cout << "the bigger value is:" << a << endl;

        /* code */
    }
    else cout << "The bigger is value is:" << b << endl;
}    void assign()
    {
        a = 55;
        b = 34;
    }
    void input()
    {
        cout << "Enter the value:" ;
        cin >> a;
        cout << "Enter the  value:" ;
        cin >> b;}
    };
    int main()
    {
        first o1,o2,o3;
        
        o1.setdata(2,4);
        o1.big();
    o2.assign();
    o2.big();
    o3.input();
    o3.big();
    return 0;
    }
