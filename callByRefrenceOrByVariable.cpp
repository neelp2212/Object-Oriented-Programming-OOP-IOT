#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// This Function Will not swap the value of a and b 
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// This is called ( Call By Refrence using Pointers)
void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// This is called ( Call By Refrence using refrence variable )
void swapPointerVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 6;
//  cout<<"The Sum of 4 and 5 is "<<sum(4,5);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//  swap(x,y);
    swapPointerVar(x, y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}