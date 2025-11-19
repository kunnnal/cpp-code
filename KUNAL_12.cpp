#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your Age:";
    cin >> age;
    if (!(age >= 15 && age <= 18))
    {
        cout << "\nYou are eligible to enroll in collage cricket club";
    }
    else
    {
        cout << "\n sorry you are not valid to enroll in collage cricket club";
    }

    return 0;
}   