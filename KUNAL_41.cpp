#include <iostream>
using namespace std;
class first{
private:
float a,b,c,sum,avg;
public:
void input()
{
    cout<<"Enter the value of a :";cin>>a;
    cout<<"Enter the value of b :";cin>>b;
    cout<<"Enter the value of c :";cin>>c;
}
void setdata(float x, float y,float z)
{
   a=x;b=y;c=z;
}
void calculate(){
    sum=a+b+c;
    avg=sum/3.0;
    cout<<"sum of the digits"<<sum<<endl;
    cout<<"avg of the digits"<<avg<<endl;
}};
int main(){
first o1 ,o2;
o1.input();
o1.calculate();
o2.setdata(3,5,6);
o2.calculate();
return  0;
}

