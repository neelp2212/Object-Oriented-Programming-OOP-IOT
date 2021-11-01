#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter Your age " << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote" << endl;
    }

    else
    {
        cout << "You cannot vote" << endl;
    } 

    //  EXAMPLE FOR SWITCH CASE

    /* int marks;
    cout << "Enter Your grade " << endl;
    cin >> marks;
    switch (marks)
    {
    case 85:
        cout << "Hurrah You got 85 marks" << endl;
        break;
    case 90:
        cout << "You score 90 marks amazing" << endl;
        break;
    default:
        cout << "You are fail" << endl;
        break;
    } */

    return 0;

}