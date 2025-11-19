#include <iostream>
using namespace std;
class first
{
public:
    int a, b, c;
    first()
    {
        a = b = 2;
    }
    void sum()
    { 
        cout << "the sum of value: "<< a + b << endl;
    }
};
int main()
{
 first obj1;
 obj1.sum();
 return 0;
}
