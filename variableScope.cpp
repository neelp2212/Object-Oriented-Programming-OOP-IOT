#include <iostream>

int main()

{
    int money;
    cout<<"Enter the amount you have in your bank: "<<endl;
    cin>>money;
    cout<<"If You have "<<money<<" in Your bank account, You will recieve "<<moneyRecieved(money)<<" after a year"<<endl;
    cout<<"If You have "<<money<<" in Your bank account, You will recieve "<<moneyRecieved(money, 1.1)<<" after a year"<<endl;

    return 0;
}