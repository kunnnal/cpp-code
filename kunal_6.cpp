#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter M or F:";
    cin>>ch;
    switch(toupper(ch)) {
        case 'M':
        cout<<"Male";
        break;
        case'F':cout<<"\nFemale\n";break;
        default:
        cout<<"invalid input";
        }

    return 0;
}