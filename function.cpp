#include <iostream>
using namespace std;

int multiplication(int a, int b)
{
    int c = a * b;
    return c;
}
int main()
{
    int x, y;

    cout << "Enter a number " << endl;
    cin >> x;

    cout << "Enter a number " << endl;
    cin >> y;

    cout << "The Result is " << multiplication(x, y) << endl;

    return 0;
    
}