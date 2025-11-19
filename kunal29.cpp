#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the choice: ";
    cin>>ch;
    if(ch>=65 && ch<=90)
    cout<<"the character is uppercase.";
    else if (ch >= 97 && ch <= 122)
    cout << "the character is lowercase.";
    else
    cout << "The character neither upper nor lowercase.";
    return 0;
}