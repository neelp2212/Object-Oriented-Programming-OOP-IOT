#include <iostream>
using namespace std;

int main()
{
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

    //int marks[] = {58, 90, 96, 98, 99, 100};
    /* cout<<"These are the Marks of Sem 1"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;
 */

    int arr2d[2][3] =
        {
            {1, 2, 3},
            {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
        }
    }

    return 0;

}