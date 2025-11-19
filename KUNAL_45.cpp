#include <iostream>
using namespace std;
class circle
{
private:
    double r;

public:
    void input();
    void area();
    void circumfrerence();
};
void circle ::input()
{
    cout << "Enter the radius of circle:";
    cin >> r;
}
void circle::area()
{
    double ar = 3.1415 * r * r;
    cout << "Area of circle =" << ar << endl;
}
void circle::circumfrerence()
{
    double cir = 2 * 3.1415 * r;
    cout << "Circumference  of the circle =" << cir << endl;
}
int main()
{
    circle s1;
    s1.input();
    s1.area();
    s1.circumfrerence();
    return 0;
}