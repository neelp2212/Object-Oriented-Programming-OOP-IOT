#include <iostream>
#include <string>
using namespace std;

class Employee
{
    public:
    string name;
    int salary;
    int age;

        Employee(string name, int salary)
        {
            this->name = name;
            this->salary = salary;
        }

        void printDetails()
        {
            cout<< "The name of our first employee is "<<this->name<<" and his salary is "<<this->salary<<endl;
        }
};
 
class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    /* Employee Neel;
    Neel.setData(1,2,3);
    Neel.d = 2012341;
    Neel.e = 123456;
    Neel.getData();
 */

    //Employee neel("Neel Patel", 569);
    //neel.printDetails();
    /* neel.name = "Neel Patel";
    neel.salary = 1200;
     */


    return 0;
}
