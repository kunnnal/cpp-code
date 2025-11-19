// By the formula of s=prt/100
#include <iostream>
using namespace std;
class file
{
private:
    float s, p, r, t;

public:
    void input()
    {
        cout << "enter the value of p:";
        cin >> p ;
        cout << "enter the value of r:";
        cin >> r ;
        cout << "enter the value of t:";
        cin >> t ;
        
    }
    void formula()
    {
        s = (p * r * t) / 100;
       cout <<"the value of s :"<<s <<endl;
    }
};
int main(){
    file o1;
o1.input();
o1.formula();
return 0;}
