#include <iostream>
using namespace std;

int main()
{
     int englishMarks[] = {91, 92, 93, 56, 98, 97};

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
 
 return 0;

 /* int a = 28;
    int* ptra;
    ptra = &a;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*ptra<<endl;
 */
}