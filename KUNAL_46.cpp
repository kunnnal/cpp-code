#include <iostream>
using namespace std;
class First{
    private:
    int a,b;
public:
void assign();
void sum();
// this is conductor 
First(){
    a=0;b=0;
}
};
// assign the first function  
inline void First::assign(){
    a=5;
    b=2;
}
// sum of the   elements
inline void First::sum(){
    cout<<a+b<<endl; 
}
int main(){
    First o1;
    o1.assign();
    o1.sum();
    return 0;
}  