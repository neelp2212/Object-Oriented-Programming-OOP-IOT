#include <iostream>
#include <string>
using namespace std;

/* int multiplication(int a, int b)
{
    int c = a * b;
    return c;
}
*/

/* class Employee
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
 */

/* class Employee
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
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
 */
int main()
{
    /* Employee Neel;
    Neel.setData(1,2,3);
    Neel.d = 2012341;
    Neel.e = 123456;
    Neel.getData();
 */

    //  EXAMPLE FOR VARIABLES

    /* int a, b;

    cout << "Enter a number" << endl;
    cin >> a;

    cout << "Enter a number" << endl;
    cin >> b;

    cout << "a + b is " << a + b << endl;
    cout << "a - b is " << a - b << endl;
    cout << "a * b is " << a * b << endl;
    cout << "a / b is " << (float)a / b << endl;
    */

    //  EXAMPLE FOR IF ELSE CONDITIONAL STATEMENT
    /* 
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
    } */

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

    /* int x, y;

    cout << "Enter a number " << endl;
    cin >> x;

    cout << "Enter a number " << endl;
    cin >> y;

    cout << "The Result is " << multiplication(x, y) << endl;
 */
    /* 
    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the marks of " << i << "th student" << endl;
        cin >> marks[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "Marks of " << i << " th student is " << marks[i] << endl;
    }
 */
    //return 0;

    /*  int arr2d[2][3] =
        {
            {1, 2, 3},
            {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
        }
    } */

    // String Funtions ()

    /*  string name,Lastname;
    cout<<"Enter Your name: ";
    cin>>name;
    cout<<"Enter Your Lastname: ";
    cin>>Lastname;
    cout<<"Good Morning "<<name + Lastname<<endl;
    cout<<"The Length of the name is: "<<name.length() + Lastname.length()<<endl;
    */

    /* int a = 28;
    int* ptra;
    ptra = &a;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*ptra<<endl;
     */

    //Employee neel("Neel Patel", 569);
    //neel.printDetails();
    /* neel.name = "Neel Patel";
    neel.salary = 1200;
     */

    // ARRAY

    // int marks[] = {58, 90, 96, 98, 99, 100};
    /* cout<<"These are the Marks of Sem 1"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;
 */
 // You can change the value of an array
    /* cout << "These are the Marks of Sem 2" << endl;
    cout << englishMarks[0] << endl;
    cout << englishMarks[1] << endl;
    cout << englishMarks[2] << endl;
    cout << englishMarks[3] << endl;
    cout << englishMarks[4] << endl;
    cout << englishMarks[5] << endl;
 */

/* int englishMarks[] = {91, 92, 93, 56, 98, 97};

for (int i = 0; i < 6; i++)
{
    cout<<"The value of marks "<<i<<" is "<<englishMarks[i]<<endl;
}

int* p = englishMarks;
cout<<"The Value of marks[0] is "<<*p<<endl;
cout<<"The Value of marks[1] is "<<*(p+1)<<endl;
cout<<"The Value of marks[2] is "<<*(p+2)<<endl;
cout<<"The Value of marks[3] is "<<*(p+3)<<endl;
cout<<"The Value of marks[4] is "<<*(p+4)<<endl;
cout<<"The Value of marks[5] is "<<*(p+5)<<endl;
 */


    return 0;
}