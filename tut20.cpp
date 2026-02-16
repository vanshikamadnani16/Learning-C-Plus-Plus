// printing factorial of a number using recursion
#include<iostream>
using namespace std;
int factorial(int x)
{
    if(x==0)
        return 1;
    else
        return x*factorial(x-1);
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int fact=factorial(num);
    cout<<"The factorial of the number is: "<<fact<<endl;
    return 0;
}