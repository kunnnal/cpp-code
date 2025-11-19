#include<iostream>
using namespace std;
int main()
{
    double num1,num2;
    char operation ;
    cout << "Enter the first value:";
    cin >> num1;
    cout << "enter the operation :";
    cin>> operation;
    cout<< "Enter the second value:";
    cin>> num2;
    switch(operation) {
        case '+':cout<<"The sum is "<< (num1+num2);
        break;
       case '-':cout <<"the minus is:"<< (num1 - num2);
       break;
       case '*':cout << "The multiply is:"<< (num1*num2);
       break;
       case '/':cout<<"The divisible is:"<<(num1/num2);
       break;
       default:
       cout << "undefine or write the value in number format:";
       break;}
        
    return 0;
}