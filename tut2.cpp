#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter marks of student: ";
    int marks;
    cin>>marks;
    if(marks>=90)
        cout<<"Grade is A";
    else if(marks>=80)
        cout<<"Grade is B";
    else if(marks>=70)
        cout<<"Grade is C";
    else if(marks>=60)
        cout<<"Grade is D";
    else
        cout<<"Grade is F";

}