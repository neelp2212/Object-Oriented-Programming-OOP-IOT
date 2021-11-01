#include <iostream>
#include <string>
using namespace std;

int main ()
{
     string name,Lastname;
    cout<<"Enter Your name: ";
    cin>>name;
    cout<<"Enter Your Lastname: ";
    cin>>Lastname;
    cout<<"Good Morning "<<name + Lastname<<endl;
    cout<<"The Length of the name is: "<<name.length() + Lastname.length()<<endl;
    
}

