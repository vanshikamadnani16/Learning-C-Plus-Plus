#include<iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    float marks;
};
int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the name: ";
        cin>>s[i].name;
        cout<<"Enter the roll number: ";
        cin>>s[i].roll;
        cout<<"Enter the marks: ";
        cin>>s[i].marks;
    }
    cout<<"The details of the students are: "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Roll number: "<<s[i].roll<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
    }
}