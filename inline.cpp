#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    return a * b;
}

int sta(int a, int b)
{
    static int c = 0; // This Will Execute Only once
    c = c + 2; // Whenever The function is running , The Value of C will be retained
    return (a * b) + c;
}

float moneyRecieved(float currentMoney, float interestRate = 1.04)
{
    return currentMoney * interestRate;
}


int main()
{
    /* int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;
    cout << "The Product of a and b is " << product(a, b) << endl;

    cout << "---------------Static Variable-----------------" << endl;

    cout << "The function of static variable is " << sta(a, b) << endl;
    cout << "The function of static variable is " << sta(a, b) << endl;
    cout << "The function of static variable is " << sta(a, b) << endl;
    cout << "The function of static variable is " << sta(a, b) << endl;
    cout << "The function of static variable is " << sta(a, b) << endl;
    cout << "The function of static variable is " << sta(a, b) << endl;
    cout << "The function of static variable is " << sta(a, b) << endl;
    cout << "The function of static variable is " << sta(a, b) << endl;
    cout << "The function of static variable is " << sta(a, b) << endl;
 */

    int money;
    cout<<"Enter the amount you have in your bank: "<<endl;
    cin>>money;
    cout<<"If You have "<<money<<" in Your bank account, You will recieve "<<moneyRecieved(money)<<" after a year"<<endl;
    cout<<"If You have "<<money<<" in Your bank account, You will recieve "<<moneyRecieved(money, 1.1)<<" after a year"<<endl;

    return 0;
}