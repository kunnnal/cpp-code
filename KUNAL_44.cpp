#include <iostream>
using namespace std;
class hi{
    public:
    int a, b;
    void assign();
    void sum();
};
 void hi::assign(){
    a=6;b=3;
 }
 void hi :: sum(){      
    cout <<"the sum of the matrix: "<<a+b<<endl;
 }
int main (){
    hi o1;
    o1.assign();
    o1.sum();
    return 0;
}      
