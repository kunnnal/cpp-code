// WAP to find the size of int , float , double , and char in.
#include<iostream>
using namespace std;
int main()
{
    cout<<"Size of int : "<<sizeof(int)<<endl; // 4 bytes
    cout<<"\n Size of float: " << sizeof (float) << endl;// 4 byte
    cout<< "\n Size of double :" << sizeof (double ) << endl ;   ///8bytes
    cout<< "\n Size of char:" << sizeof ('a') << endl ;    ////1byte
    return 0;
}