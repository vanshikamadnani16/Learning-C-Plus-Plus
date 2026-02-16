//to print fabonacci series using recursion
#include<iostream>
using namespace std;
int fibonacci(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fibonacci(x-1)+fibonacci(x-2);
}
int main()
{
    int num;
    cout<<"Enter the number of terms: ";
    cin>>num;
    cout<<"The Fibonacci series is: ";
    for(int i=0;i<num;i++)
        cout<<fibonacci(i)<<",";
    cout<<endl;
    return 0;
}