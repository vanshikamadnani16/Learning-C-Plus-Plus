#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    string name;
    float salary;
    employee(string n, int i, float s)
    {
        this->name = n;
        this->id = i;
        this->salary = s;
    }
    void display()
    {
cout<<"The details of the employee are: "<<endl;
cout<<"ID: "<<this->id<<endl;
cout<<"Name: "<<this->name<<endl;
cout<<"Salary: "<<this->salary<<endl;
    }
};
int main()
{
employee vans("Vanshika Madnani", 101, 50000.0);
vans.display();
return 0;
}
